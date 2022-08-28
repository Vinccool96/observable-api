//
// Created by Vincent on 2022-03-11.
//

#ifndef OBSERVABLEAPI_NOTIMPLEMENTEDEXCEPTION_HPP
#define OBSERVABLEAPI_NOTIMPLEMENTEDEXCEPTION_HPP

#include <stdexcept>

namespace observable::exceptions
{

    /// A simple exception that shows that the method or use case hasn't been implemented
    class NotImplementedException : public std::logic_error
    {

      public:

        NotImplementedException();

        /// Create a `NotImplementedException` with the designated string
        /// \param s the error string
        explicit NotImplementedException(const std::string &s);

    };

}

#endif //OBSERVABLEAPI_NOTIMPLEMENTEDEXCEPTION_HPP
