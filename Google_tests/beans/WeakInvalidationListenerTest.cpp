//
// Created by Vincent on 2022-03-10.
//

#include "gtest/gtest.h"
#include "InvalidationListenerMock.hpp"
#include "../../src/beans/value/ObservableValue.hpp"
#include "../../src/beans/WeakInvalidationListener.hpp"

namespace observable::beans
{

    class ObservableMock : public value::ObservableValue<std::string>
    {
      public:
        void reset()
        {
            this->removeCounter = 0;
        }

        std::string getValue() override
        {
            return "";
        }

        void removeListener(InvalidationListener &listener) override
        {
            this->removeCounter++;
        }

        [[nodiscard]]
        int getRemoveCounter() const
        {
            return this->removeCounter;
        }

        void addListener(InvalidationListener &listener) override
        {
            FAIL();
        }

        bool isInvalidationListenerAlreadyAdded(InvalidationListener &listener) override
        {
            return false;
        }

        void addListener(value::ChangeListener<std::string> &listener) override
        {
            FAIL();
        }

        void removeListener(value::ChangeListener<std::string> &listener) override
        {
            this->removeCounter++;
        }

        bool isChangeListenerAlreadyAdded(value::ChangeListener<std::string> &listener) override
        {
            return false;
        }

      private:
        int removeCounter = 0;
    };

    TEST(SuiteName, TestHandle)
    {
        std::shared_ptr<InvalidationListenerMock> listener = std::make_shared<InvalidationListenerMock>();
        WeakInvalidationListener weakListener = WeakInvalidationListener(listener);
        ObservableMock o = ObservableMock();

        // regular call
        weakListener.invalidated(o);
        listener->check(o, 1);
        ASSERT_FALSE(weakListener.wasGarbageCollected());

        // GC-ed call
        o.reset();
        listener.reset();
        ASSERT_TRUE(weakListener.wasGarbageCollected());
        weakListener.invalidated(o);
        ASSERT_EQ(1, o.getRemoveCounter());
    }

}
