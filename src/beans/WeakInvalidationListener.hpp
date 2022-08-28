//
// Created by Vincent on 2022-03-10.
//

#ifndef OBSERVABLEAPI_WEAKINVALIDATIONLISTENER_HPP
#define OBSERVABLEAPI_WEAKINVALIDATIONLISTENER_HPP

#include <memory>
#include "WeakListener.hpp"
#include "Observable.hpp"

namespace observable::beans
{

    /// A `WeakInvalidationListener` can be used, if an `Observable` should only maintain a weak reference to the
    /// listener. This helps to avoid memory leaks, that can occur if observers are not unregistered from observed
    /// objects after use.
    ///
    /// `WeakInvalidationListener` are created by passing in the original `InvalidationListener`. The
    /// `WeakInvalidationListener` should then be registered to listen for changes of the observed object.
    ///
    /// Note: You have to keep a reference to the `InvalidationListener`, that was passed in as long as it is in use,
    /// otherwise it will be garbage collected too soon.
    ///
    /// @see InvalidationListener
    /// @see Observable
    class WeakInvalidationListener : public InvalidationListener, public WeakListener
    {

      public:

        /// Create a `WeakListener` wrapping an `InvalidationListener`
        ///
        /// @param listener the listener to wrap
        explicit WeakInvalidationListener(const std::shared_ptr<InvalidationListener> &listener);

        void invalidated(Observable &observable) override;

        bool wasGarbageCollected() override;

      private:

        std::weak_ptr<InvalidationListener> ref;

    };
}

#endif //OBSERVABLEAPI_WEAKINVALIDATIONLISTENER_HPP
