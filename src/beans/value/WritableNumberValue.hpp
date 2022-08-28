//
// Created by Vincent on 2022-08-28.
//

#ifndef OBSERVABLEAPI_WRITABLENUMBERVALUE_HPP
#define OBSERVABLEAPI_WRITABLENUMBERVALUE_HPP

#include "WritableValue.hpp"
#include "../../../wrapping/Number.hpp"

namespace observable::beans::value
{

    /// A tagging interface that marks all sub-interfaces of `WritableValue` that wrap a number.
    ///
    /// @see WritableValue
    /// @see WritableDoubleValue
    /// @see WritableFloatValue
    /// @see WritableIntValue
    /// @see WritableLongValue
    /// @see WritableShortValue
    /// @see WritableByteValue
    class WritableNumberValue : public WritableValue<wrapping::Number>
    {

    };

}

#endif //OBSERVABLEAPI_WRITABLENUMBERVALUE_HPP
