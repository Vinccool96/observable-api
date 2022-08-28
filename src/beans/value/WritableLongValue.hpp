//
// Created by Vincent on 2022-08-28.
//

#ifndef OBSERVABLEAPI_WRITABLELONGVALUE_HPP
#define OBSERVABLEAPI_WRITABLELONGVALUE_HPP

#include "WritableIntegerValue.hpp"
#include "../../../wrapping/Number.hpp"

namespace observable::beans::value
{

    /// An observable long value.
    ///
    /// @see WritableValue
    /// @see WritableNumberValue
    class WritableLongValue : public WritableIntegerValue
    {
    
      public:
    
        /// Returns the current value of this `WritableLongValue`.
        ///
        /// @return The current value
        virtual long get() = 0;
        
        /// Set the wrapped value. Unlike `setValue(wrapping::Long)`, this method uses not-nullable `Long`.
        ///
        /// @param value The new value
        virtual void setValue(long value) = 0;
    
    };

}

#endif //OBSERVABLEAPI_WRITABLELONGVALUE_HPP

