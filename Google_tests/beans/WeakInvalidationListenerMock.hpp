//
// Created by Vincent on 2022-03-10.
//

#ifndef OBSERVABLEAPI_WEAKINVALIDATIONLISTENERMOCK_HPP
#define OBSERVABLEAPI_WEAKINVALIDATIONLISTENERMOCK_HPP

#include "../../src/beans/Observable.hpp"
#include "../../src/beans/WeakListener.hpp"

namespace observable::beans
{
    class WeakInvalidationListenerMock:public InvalidationListener,public WeakListener
    {
        bool wasGarbageCollected() override;
    };
}

#endif //OBSERVABLEAPI_WEAKINVALIDATIONLISTENERMOCK_HPP
