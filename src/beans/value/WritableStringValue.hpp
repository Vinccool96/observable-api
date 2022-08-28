//
// Created by Vincent on 2022-08-28.
//

#ifndef OBSERVABLEAPI_WRITABLESTRINGVALUE_HPP
#define OBSERVABLEAPI_WRITABLESTRINGVALUE_HPP

#include <string>
#include "WritableObjectValue.hpp"

namespace observable::beans::value
{

    /// A writable String value.
    ///
    /// @see WritableObjectValue
    /// @see WritableValue
    class WritableStringValue : public WritableObjectValue<std::string *>
    {
    };

}

#endif //OBSERVABLEAPI_WRITABLESTRINGVALUE_HPP
