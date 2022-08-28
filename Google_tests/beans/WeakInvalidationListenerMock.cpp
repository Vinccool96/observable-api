//
// Created by Vincent on 2022-03-10.
//

#include "WeakInvalidationListenerMock.hpp"

bool observable::beans::WeakInvalidationListenerMock::wasGarbageCollected()
{
    return true;
}
