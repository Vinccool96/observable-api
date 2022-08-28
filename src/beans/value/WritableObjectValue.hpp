//
// Created by Vincent on 2022-08-28.
//

#ifndef OBSERVABLEAPI_WRITABLEOBJECTVALUE_HPP
#define OBSERVABLEAPI_WRITABLEOBJECTVALUE_HPP

#include "WritableValue.hpp"

namespace observable::beans::value
{

    /// A writable typed `Object` value.
    ///
    /// @tparam T The type of the wrapped value
    ///
    /// @see WritableValue
    template<typename T>
    class WritableObjectValue : public WritableValue<T>
    {

        /// Get the wrapped value. This must be identical to the value returned from `getValue()`.
        ///
        /// This method exists only to align `WritableObjectValue` API with `WritableBooleanValue` and subclasses of
        /// `WritableNumberValue`.
        ///
        /// @return The current value
        virtual T get() = 0;

        /// Set the wrapped value. Should be equivalent to [setValue]
        ///
        /// @param value The new value
        ///
        /// @see get()
        virtual void set(T value) = 0;

    };

}

#endif //OBSERVABLEAPI_WRITABLEOBJECTVALUE_HPP
