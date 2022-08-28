//
// Created by Vincent on 2022-03-10.
//

#ifndef OBSERVABLEAPI_OBSERVABLEVALUE_HPP
#define OBSERVABLEAPI_OBSERVABLEVALUE_HPP

#include "../Observable.hpp"

namespace observable::beans::value
{

    template<typename T>
    class ChangeListener;

    /// An `ObservableValue` is an entity that wraps a value and allows to observe the value for changes. In general
    /// this interface should not be implemented directly but one of its sub-interfaces (`ObservableBooleanValue`, etc.).
    ///
    /// The value of the `ObservableValue` can be requested with [value].
    ///
    /// An implementation of `ObservableValue` may support lazy evaluation, which means that the value is not
    /// immediately recomputed after changes, but lazily the next time the value is requested. All binding and
    /// properties in this library support lazy evaluation.
    ///
    /// An `ObservableValue` generates two types of events: change events and invalidation events. A change event
    /// indicates that the value has changed. An invalidation event is generated, if the current value is not valid
    /// anymore. This distinction becomes important, if the `ObservableValue` supports lazy evaluation, because for a
    /// lazily evaluated value one does not know if an invalid value really has changed until it is recomputed. For this
    /// reason, generating change events requires eager evaluation while invalidation events can be generated for eager
    /// and lazy implementations.
    ///
    /// Implementations of this class should strive to generate as few events as possible to avoid wasting too much time
    /// in event handlers. Implementations in this library mark themselves as invalid when the first invalidation event
    /// occurs. They do not generate any more invalidation events until their value is recomputed and valid again.
    ///
    /// Two types of listeners can be attached to an `ObservableValue`: InvalidationListener to listen to invalidation
    /// events and [ChangeListener] to listen to change events.
    ///
    /// Important note: attaching a `ChangeListener` enforces eager computation even if the implementation of the
    /// `ObservableValue` supports lazy evaluation.
    ///
    /// @tparam T The type of the wrapped value.
    ///
    /// @see ObservableBooleanValue
    /// @see ObservableDoubleValue
    /// @see ObservableFloatValue
    /// @see ObservableIntValue
    /// @see ObservableLongValue
    /// @see ObservableShortValue
    /// @see ObservableNumberValue
    /// @see ObservableObjectValue
    /// @see ObservableStringValue
    template<typename T>
    class ObservableValue : public Observable
    {

      public:

        /// Returns the current value of this `ObservableValue`
        ///
        /// @return The current value
        virtual T getValue() = 0;

        /// Adds a [ChangeListener] which will be notified whenever the value of the `ObservableValue` changes. If the
        /// same listener is added more than once, then it will be notified more than once. That is, no check is made to
        /// ensure uniqueness.
        ///
        /// Note that the same actual `ChangeListener` instance may be safely registered for different
        /// `ObservableValues`.
        ///
        /// The `ObservableValue` stores a strong reference to the listener which will prevent the listener from being
        /// garbage collected and may result in a memory leak. It is recommended to either unregister a listener by
        /// calling [removeListener] after use or to use an instance of [WeakChangeListener] avoid this situation.
        ///
        /// @param listener The listener to register
        ///
        /// @see removeListener
        virtual void addListener(ChangeListener<T> &listener) = 0;

        /// Removes the given listener from the list of listeners, that are notified whenever the value of the
        /// `ObservableValue` changes.
        ///
        /// If the given listener has not been previously registered (i.e. it was never added) then this method call is
        /// a no-op. If it had been previously added then it will be removed. If it had been added more than once, then
        /// only the first occurrence will be removed.
        ///
        /// @param listener The listener to remove
        ///
        /// @see addListener
        virtual void removeListener(ChangeListener<T> &listener) = 0;

        /// Verify if the specified `ChangeListener` already exists for this `ObservableValue`.
        ///
        /// @param listener the `ChangeListener` to verify
        ///
        /// @return `true`, if the listener already listens, `false` otherwise.
        virtual bool isChangeListenerAlreadyAdded(ChangeListener<T> &listener) = 0;

    };

    /// A `ChangeListener` is notified whenever the value of an [ObservableValue] changes. It can be registered and
    /// unregistered with [ObservableValue.addListener] and [ObservableValue.removeListener] respectively.
    ///
    /// For an in-depth explanation of change events and how they differ from invalidation events, see the documentation
    /// of `ObservableValue`.
    ///
    /// The same instance of `ChangeListener` can be registered to listen to multiple `ObservableValues`.
    ///
    /// @see ObservableValue
    template<typename T>
    class ChangeListener
    {

      public:

        /// This method needs to be provided by an implementation of `ChangeListener`. It is called if the value of an
        /// [ObservableValue] changes.
        ///
        /// In general, it is considered bad practice to modify the observed value in this method.
        ///
        /// @param observable The `ObservableValue` which value changed
        /// @param oldValue The old value
        /// @param newValue The new value
        virtual void changed(ObservableValue<T> observable, T oldValue, T newValue) = 0;

    };

}

#endif //OBSERVABLEAPI_OBSERVABLEVALUE_HPP
