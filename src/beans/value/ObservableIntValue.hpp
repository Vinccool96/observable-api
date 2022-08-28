//
// Created by Vincent on 2022-08-28.
//

#ifndef OBSERVABLEAPI_OBSERVABLEINTVALUE_HPP
#define OBSERVABLEAPI_OBSERVABLEINTVALUE_HPP

#include "ObservableIntegerValue.hpp"
#include "../../../wrapping/Number.hpp"

namespace observable::beans::value
{

    /// An observable int value.
    ///
    /// @see ObservableValue
    /// @see ObservableNumberValue
    class ObservableIntValue : public ObservableIntegerValue
    {
    
      public:
    
        virtual int get() = 0;
    
    };

}

#endif //OBSERVABLEAPI_OBSERVABLEINTVALUE_HPP

