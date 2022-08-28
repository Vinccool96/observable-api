//
// Created by Vincent on 2022-08-28.
//

#ifndef OBSERVABLEAPI_WRITABLEVALUE_HPP
#define OBSERVABLEAPI_WRITABLEVALUE_HPP

namespace observable::beans::value
{

    /// A `WritableValue` is an entity that wraps a value that can be read and set. In general this interface should
    /// not be implemented directly but one of its sub-interfaces (`WritableBooleanValue` etc.).
    ///
    /// @tparam T The type of the wrapped value
    /// 
    /// @see WritableBooleanValue
    /// @see WritableDoubleValue
    /// @see WritableFloatValue
    /// @see WritableIntValue
    /// @see WritableLongValue
    /// @see WritableNumberValue
    /// @see WritableObjectValue
    /// @see WritableStringValue
    template<typename T>
    class WritableValue
    {

      public:

        /// Returns the current value of this `WritableValue`
        ///
        /// @return The current value
        virtual T getValue() = 0;

        /// Sets the value of this `WritableValue`
        ///
        /// @param value The new value
        virtual void setValue(T value) = 0;

    };

}

#endif //OBSERVABLEAPI_WRITABLEVALUE_HPP
