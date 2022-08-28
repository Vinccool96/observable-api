//
// Created by Vincent on 2022-08-28.
//

#ifndef OBSERVABLEAPI_WRITABLEBOOLEANVALUE_HPP
#define OBSERVABLEAPI_WRITABLEBOOLEANVALUE_HPP

#include "WritableValue.hpp"
#include "../../../wrapping/Boolean.hpp"

namespace observable::beans::value
{

    /// A writable boolean value.
    ///
    /// @see WritableValue
    class WritableBooleanValue : public WritableValue<wrapping::Boolean>
    {

      public:

        ///  Get the wrapped value. Unlike `getValue()`, this method returns not-nullable `Boolean`. Needs to be
        /// identical to `getValue()`.
        virtual bool get() = 0;

        /// Set the wrapped value. Unlike `setValue(wrapping::Boolean)`, this method uses not-nullable `Boolean`.
        ///
        /// @param value The new value
        virtual void setValue(bool value) = 0;

    };

}


#endif //OBSERVABLEAPI_WRITABLEBOOLEANVALUE_HPP
