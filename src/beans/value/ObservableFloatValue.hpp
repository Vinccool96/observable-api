//
// Created by Vincent on 2022-08-28.
//

#ifndef OBSERVABLEAPI_OBSERVABLEFLOATVALUE_HPP
#define OBSERVABLEAPI_OBSERVABLEFLOATVALUE_HPP

#include "ObservableNumberValue.hpp"

#include "../../../wrapping/Number.hpp"

namespace observable::beans::value
{

    /// An observable float value.
    ///
    /// @see ObservableValue
    /// @see ObservableNumberValue
    class ObservableFloatValue : public ObservableNumberValue
    {
    
      public:
    
        virtual float get() = 0;
    
    };

}

#endif //OBSERVABLEAPI_OBSERVABLEFLOATVALUE_HPP

