//
// Created by Vincent on 2022-08-27.
//

#ifndef OBSERVABLEAPI_OBSERVABLEBOOLEANVALUE_HPP
#define OBSERVABLEAPI_OBSERVABLEBOOLEANVALUE_HPP

#include "ObservableValue.hpp"
#include "../../../wrapping/Boolean.hpp"

namespace observable::beans::value
{

    /// An observable boolean value.
    ///
    /// @see ObservableValue
    class ObservableBooleanValue : public ObservableValue<wrapping::Boolean>
    {

      public:

        /// Returns the current value of this `ObservableBooleanValue`.
        ///
        /// @return The current value
        virtual bool get() = 0;
    };

}

#endif //OBSERVABLEAPI_OBSERVABLEBOOLEANVALUE_HPP
