//
// Created by Vincent on 2022-08-28.
//

#ifndef OBSERVABLEAPI_WRITABLEINTEGERVALUE_HPP
#define OBSERVABLEAPI_WRITABLEINTEGERVALUE_HPP

#include "WritableValue.hpp"
#include "WritableNumberValue.hpp"
#include "../../../wrapping/Number.hpp"

namespace observable::beans::value
{

    /// A common interface of all sub-interfaces of `WritableValue` that wrap an integer.
    ///
    /// For the `<T>` of `WritableValue`, it is the type of the wrapped value (an `Integer`).
    ///
    /// @see WritableValue
    /// @see WritableIntValue
    /// @see WritableLongValue
    /// @see WritableShortValue
    class WritableIntegerValue : public WritableNumberValue, public WritableValue<wrapping::Integer>
    {
    };

}

#endif //OBSERVABLEAPI_WRITABLEINTEGERVALUE_HPP
