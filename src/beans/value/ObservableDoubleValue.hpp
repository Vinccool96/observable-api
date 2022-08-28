//
// Created by Vincent on 2022-08-28.
//

#ifndef OBSERVABLEAPI_OBSERVABLEDOUBLEVALUE_HPP
#define OBSERVABLEAPI_OBSERVABLEDOUBLEVALUE_HPP

#include "ObservableNumberValue.hpp"

#include "../../../wrapping/Number.hpp"

namespace observable::beans::value
{

    /// An observable double value.
    ///
    /// @see ObservableValue
    /// @see ObservableNumberValue
    class ObservableDoubleValue : public ObservableNumberValue
    {
    
      public:
    
        virtual double get() = 0;
    
    };

}

#endif //OBSERVABLEAPI_OBSERVABLEDOUBLEVALUE_HPP

