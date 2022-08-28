//
// Created by Vincent on 2022-08-28.
//

#ifndef OBSERVABLEAPI_OBSERVABLELONGVALUE_HPP
#define OBSERVABLEAPI_OBSERVABLELONGVALUE_HPP

#include "ObservableIntegerValue.hpp"
#include "../../../wrapping/Number.hpp"

namespace observable::beans::value
{

    /// An observable long value.
    ///
    /// @see ObservableValue
    /// @see ObservableNumberValue
    class ObservableLongValue : public ObservableIntegerValue
    {
    
      public:
    
        /// Returns the current value of this `ObservableLongValue`.
        ///
        /// @return The current value
        virtual long get() = 0;
    
    };

}

#endif //OBSERVABLEAPI_OBSERVABLELONGVALUE_HPP

