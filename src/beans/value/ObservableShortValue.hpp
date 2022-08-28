//
// Created by Vincent on 2022-08-28.
//

#ifndef OBSERVABLEAPI_OBSERVABLESHORTVALUE_HPP
#define OBSERVABLEAPI_OBSERVABLESHORTVALUE_HPP

#include "ObservableIntegerValue.hpp"
#include "../../../wrapping/Number.hpp"

namespace observable::beans::value
{

    /// An observable short value.
    ///
    /// @see ObservableValue
    /// @see ObservableNumberValue
    class ObservableShortValue : public ObservableIntegerValue
    {
    
      public:
    
        /// Returns the current value of this `ObservableShortValue`.
        ///
        /// @return The current value
        virtual short get() = 0;
    
    };

}

#endif //OBSERVABLEAPI_OBSERVABLESHORTVALUE_HPP

