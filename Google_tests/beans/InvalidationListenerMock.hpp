//
// Created by Vincent on 2022-03-10.
//

#ifndef OBSERVABLEAPI_INVALIDATIONLISTENERMOCK_HPP
#define OBSERVABLEAPI_INVALIDATIONLISTENERMOCK_HPP

#include "../../src/beans/Observable.hpp"

namespace observable::beans
{
    class InvalidationListenerMock : public InvalidationListener
    {
      public:
        void invalidated(Observable &observable) override;

        void reset();

        void check(Observable &observable, int counter);

      private:
        Observable *observable = nullptr;

        int counter = 0;

    };
}

#endif //OBSERVABLEAPI_INVALIDATIONLISTENERMOCK_HPP
