//
// Created by Vincent on 2022-08-28.
//

#ifndef OBSERVABLEAPI_WRITABLEFLOATVALUE_HPP
#define OBSERVABLEAPI_WRITABLEFLOATVALUE_HPP

#include "WritableNumberValue.hpp"
#include "../../../wrapping/Number.hpp"

namespace observable::beans::value
{

    /// An observable float value.
    ///
    /// @see WritableValue
    /// @see WritableNumberValue
    class WritableFloatValue : public WritableNumberValue
    {
    
      public:
    
        /// Returns the current value of this `WritableFloatValue`.
        ///
        /// @return The current value
        virtual float get() = 0;
        
        /// Set the wrapped value. Unlike `setValue(wrapping::Float)`, this method uses not-nullable `Float`.
        ///
        /// @param value The new value
        virtual void setValue(float value) = 0;
    
    };

}

#endif //OBSERVABLEAPI_WRITABLEFLOATVALUE_HPP

