//
// Created by Vincent on 2022-08-28.
//

#ifndef OBSERVABLEAPI_OBSERVABLESTRINGVALUE_HPP
#define OBSERVABLEAPI_OBSERVABLESTRINGVALUE_HPP

#include <iostream>
#include "ObservableObjectValue.hpp"

namespace observable::beans::value
{

    /// An observable String value.
    ///
    /// @see ObservableObjectValue
    /// @see ObservableValue
    class ObservableStringValue : public ObservableObjectValue<std::string *>
    {
    };

}

#endif //OBSERVABLEAPI_OBSERVABLESTRINGVALUE_HPP
