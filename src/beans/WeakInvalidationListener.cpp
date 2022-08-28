//
// Created by Vincent on 2022-03-10.
//

#include "WeakInvalidationListener.hpp"

observable::beans::WeakInvalidationListener::WeakInvalidationListener(
        const std::shared_ptr<InvalidationListener> &listener) : ref(listener)
{
}

void observable::beans::WeakInvalidationListener::invalidated(Observable &observable)
{
    if (!this->ref.expired())
    {
        this->ref.lock()->invalidated(observable);
    }
    else
    {
        observable.removeListener(*this);
    }
}

bool  observable::beans::WeakInvalidationListener::wasGarbageCollected()
{
    return this->ref.expired();
}
