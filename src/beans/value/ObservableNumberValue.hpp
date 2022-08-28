//
// Created by Vincent on 2022-08-28.
//

#ifndef OBSERVABLEAPI_OBSERVABLENUMBERVALUE_HPP
#define OBSERVABLEAPI_OBSERVABLENUMBERVALUE_HPP

#include "ObservableValue.hpp"
#include "../../../wrapping/Number.hpp"

namespace observable::beans::value
{

    /// A common interface of all sub-interfaces of `ObservableValue` that wrap a number.
    ///
    /// For the `<T>` of `ObservableValue`, it is the type of the wrapped value (a `Number`).
    ///
    /// @see ObservableValue
    /// @see ObservableDoubleValue
    /// @see ObservableFloatValue
    /// @see ObservableIntValue
    /// @see ObservableLongValue
    /// @see ObservableShortValue
    class ObservableNumberValue : public ObservableValue<wrapping::Number>
    {

      public:

        /// Returns the value of this `ObservableNumberValue` as a `double`. If the value is not a `double`, a standard
        /// cast is performed.
        ///
        /// @return The value of this `ObservableNumberValue` as a `double`
        virtual double getDoubleValue() const = 0;

        /// Returns the value of this `ObservableNumberValue` as a `float`. If the value is not a `float`, a standard
        /// cast is performed.
        ///
        /// @return The value of this `ObservableNumberValue` as a `float`
        virtual float getFloatValue() const = 0;

        /// Returns the value of this `ObservableNumberValue` as a `long`. If the value is not a `long`, a standard cast
        /// is performed.
        ///
        /// @return The value of this `ObservableNumberValue` as a `long`
        virtual long getLongValue() const = 0;

        /// Returns the value of this `ObservableNumberValue` as a `int`. If the value is not a `int`, a standard cast
        /// is performed.
        ///
        /// @return The value of this `ObservableNumberValue` as a `int`
        virtual int getIntValue() const = 0;

        /// Returns the value of this `ObservableNumberValue` as a `short`. If the value is not a `short`, a standard
        /// cast is performed.
        ///
        /// @return The value of this `ObservableNumberValue` as a `short`
        virtual short getShortValue() const = 0;

    };

}


#endif //OBSERVABLEAPI_OBSERVABLENUMBERVALUE_HPP
