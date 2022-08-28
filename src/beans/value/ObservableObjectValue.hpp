//
// Created by Vincent on 2022-08-28.
//

#ifndef OBSERVABLEAPI_OBSERVABLEOBJECTVALUE_HPP
#define OBSERVABLEAPI_OBSERVABLEOBJECTVALUE_HPP

#include "ObservableValue.hpp"

namespace observable::beans::value
{

    /// An observable typed `Object` value.
    ///
    /// @param T The type of the wrapped value
    ///
    /// @see ObservableValue
    template<typename T>
    class ObservableObjectValue: public ObservableValue<T>
    {

      public:

        /// Returns the current value of this `ObservableObjectValue<T>`.
        ///
        /// @return The current value
        virtual double get() = 0;

    };

}

#endif //OBSERVABLEAPI_OBSERVABLEOBJECTVALUE_HPP
