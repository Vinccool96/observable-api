//
// Created by Vincent on 2022-03-10.
//

#ifndef OBSERVABLEAPI_OBSERVABLE_HPP
#define OBSERVABLEAPI_OBSERVABLE_HPP

namespace observable::beans
{

    class InvalidationListener;

    /// An `Observable` is an entity that wraps content and allows to observe the content for invalidations.
    ///
    /// An implementation of `Observable` may support lazy evaluation, which means that the content is not immediately
    /// recomputed after changes, but lazily the next time it is requested. All binding and properties in this library
    /// support lazy evaluation.
    ///
    /// Implementations of this class should strive to generate as few events as possible to avoid wasting too much time
    /// in event handlers. Implementations in this library mark themselves as invalid when the first invalidation event
    /// occurs. They do not generate anymore invalidation events until their value is recomputed and valid again.
    class Observable
    {

      public:

        /// Adds an `InvalidationListener` which will be notified whenever the `Observable` becomes invalid. If the same
        /// listener is added more than once, then it will be notified more than once. That is, no check is made to
        /// ensure uniqueness.
        ///
        /// Note that the same actual `InvalidationListener` instance may be safely registered for different
        /// `Observable`.
        ///
        /// The `Observable` stores a strong reference to the listener which will prevent the listener from being
        /// garbage collected and may result in a memory leak. It is recommended to either unregister a listener by
        /// calling `removeListener(InvalidationListener&)` after use or to use an instance of
        /// `WeakInvalidationListener` avoid this situation.
        ///
        /// @param listener The listener to register
        ///
        /// @see removeListener(InvalidationListener&)
        virtual void addListener(InvalidationListener &listener) = 0;

        /// Removes the given listener from the collections of listeners, that are notified whenever the value of the
        /// `Observable` becomes invalid.
        ///
        /// If the given listener has not been previously registered (i.e. it was never added) then this method call is
        /// a no-op. If it had been previously added then it will be removed. If it had been added more than once, then
        /// only the first occurrence will be removed.
        ///
        /// @param listener The listener to remove
        ///
        /// @see addListener(InvalidationListener&)
        virtual void removeListener(InvalidationListener &listener) = 0;

        /// Verify if the specified `InvalidationListener` already exists for this `Observable`.
        ///
        /// @param listener the `InvalidationListener` to verify
        ///
        /// @return `true`, if the listener already listens, `false` otherwise.
        virtual bool isInvalidationListenerAlreadyAdded(InvalidationListener &listener) = 0;

    };

    /// An `InvalidationListener` is notified whenever an `Observable` becomes invalid. It can be registered and
    /// unregistered with `Observable.addListener` and `Observable.removeListener` respectively.
    ///
    /// For an in-depth explanation of invalidation events and how they differ from change events, see the documentation
    /// of `ObservableValue`.
    ///
    /// The same instance of `InvalidationListener` can be registered to listen to multiple `Observables`.
    ///
    /// @see Observable
    /// @see ObservableValue
    class InvalidationListener
    {

      public:

        /// This method needs to be provided by an implementation of `InvalidationListener`. It is called if an
        /// `Observable` becomes invalid.
        ///
        /// In general, it is considered bad practice to modify the observed value in this method.
        ///
        /// @param observable The `Observable` that became invalid
        virtual void invalidated(Observable &observable) = 0;

    };
}

#endif //OBSERVABLEAPI_OBSERVABLE_HPP
