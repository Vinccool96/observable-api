//
// Created by Vincent on 2022-08-28.
//

#ifndef OBSERVABLEAPI_WRITABLEINTVALUE_HPP
#define OBSERVABLEAPI_WRITABLEINTVALUE_HPP

#include "WritableIntegerValue.hpp"
#include "../../../wrapping/Number.hpp"

namespace observable::beans::value
{

    /// An observable int value.
    ///
    /// @see WritableValue
    /// @see WritableNumberValue
    class WritableIntValue : public WritableIntegerValue
    {
    
      public:
    
        /// Returns the current value of this `WritableIntValue`.
        ///
        /// @return The current value
        virtual int get() = 0;
        
        /// Set the wrapped value. Unlike `setValue(wrapping::Int)`, this method uses not-nullable `Int`.
        ///
        /// @param value The new value
        virtual void setValue(int value) = 0;
    
    };

}

#endif //OBSERVABLEAPI_WRITABLEINTVALUE_HPP

