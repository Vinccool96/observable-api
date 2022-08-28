//
// Created by Vincent on 2022-03-10.
//

#ifndef OBSERVABLEAPI_WEAKLISTENER_HPP
#define OBSERVABLEAPI_WEAKLISTENER_HPP

namespace observable::beans
{
    /// `WeakListener` is the super interface of all weak listener implementations of the API runtime. Usually it should
    /// not be used directly, but instead one of the sub-interfaces will be used.
    ///
    /// @see WeakInvalidationListener
    /// @see observable::beans::value::WeakChangeListener
    ///
    class WeakListener
    {
      public:
        virtual bool wasGarbageCollected() = 0;
    };
}

#endif //OBSERVABLEAPI_WEAKLISTENER_HPP
