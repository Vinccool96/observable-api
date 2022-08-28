//
// Created by Vincent on 2022-08-28.
//

#ifndef OBSERVABLEAPI_WRITABLESHORTVALUE_HPP
#define OBSERVABLEAPI_WRITABLESHORTVALUE_HPP

#include "WritableIntegerValue.hpp"
#include "../../../wrapping/Number.hpp"

namespace observable::beans::value
{

    /// An observable short value.
    ///
    /// @see WritableValue
    /// @see WritableNumberValue
    class WritableShortValue : public WritableIntegerValue
    {
    
      public:
    
        /// Returns the current value of this `WritableShortValue`.
        ///
        /// @return The current value
        virtual short get() = 0;
        
        /// Set the wrapped value. Unlike `setValue(wrapping::Short)`, this method uses not-nullable `Short`.
        ///
        /// @param value The new value
        virtual void setValue(short value) = 0;
    
    };

}

#endif //OBSERVABLEAPI_WRITABLESHORTVALUE_HPP

