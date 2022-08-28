//
// Created by Vincent on 2022-08-28.
//

#ifndef OBSERVABLEAPI_WRITABLEDOUBLEVALUE_HPP
#define OBSERVABLEAPI_WRITABLEDOUBLEVALUE_HPP

#include "WritableNumberValue.hpp"
#include "../../../wrapping/Number.hpp"

namespace observable::beans::value
{

    /// An observable double value.
    ///
    /// @see WritableValue
    /// @see WritableNumberValue
    class WritableDoubleValue : public WritableNumberValue
    {
    
      public:
    
        /// Returns the current value of this `WritableDoubleValue`.
        ///
        /// @return The current value
        virtual double get() = 0;
        
        /// Set the wrapped value. Unlike `setValue(wrapping::Double)`, this method uses not-nullable `Double`.
        ///
        /// @param value The new value
        virtual void setValue(double value) = 0;
    
    };

}

#endif //OBSERVABLEAPI_WRITABLEDOUBLEVALUE_HPP

