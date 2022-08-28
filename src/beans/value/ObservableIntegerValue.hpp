//
// Created by Vincent on 2022-08-28.
//

#ifndef OBSERVABLEAPI_OBSERVABLEINTEGERVALUE_HPP
#define OBSERVABLEAPI_OBSERVABLEINTEGERVALUE_HPP

#include "ObservableValue.hpp"
#include "ObservableNumberValue.hpp"
#include "../../../wrapping/Number.hpp"

namespace observable::beans::value
{

    /// A common interface of all sub-interfaces of [ObservableValue] that wrap an integer.
    ///
    /// For the `<T>` of [ObservableValue], it is the type of the wrapped value (an `Integer`).
    ///
    /// @see ObservableValue
    /// @see ObservableIntValue
    /// @see ObservableLongValue
    /// @see ObservableShortValue
    class ObservableIntegerValue : public ObservableNumberValue, public ObservableValue<wrapping::Integer>
    {
    };

}

#endif //OBSERVABLEAPI_OBSERVABLEINTEGERVALUE_HPP
