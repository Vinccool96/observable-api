//
// Created by Vincent on 2022-03-10.
//

#include "InvalidationListenerMock.hpp"
#include "gtest/gtest.h"

void observable::beans::InvalidationListenerMock::invalidated(observable::beans::Observable &observable)
{
    this->observable = &observable;
    this->counter++;
}

void observable::beans::InvalidationListenerMock::reset()
{
    this->observable = nullptr;
    this->counter = 0;
}

void observable::beans::InvalidationListenerMock::check(observable::beans::Observable &observable, int counter)
{
    ASSERT_TRUE(&observable == &(*this->observable));
    ASSERT_EQ(counter, this->counter);
}
