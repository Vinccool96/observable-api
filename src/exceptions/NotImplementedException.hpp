//
// Created by Vincent on 2022-03-11.
//

#ifndef OBSERVABLEAPI_NOTIMPLEMENTEDEXCEPTION_HPP
#define OBSERVABLEAPI_NOTIMPLEMENTEDEXCEPTION_HPP

#include <stdexcept>

namespace observable::exceptions
{
    class NotImplementedException : public std::logic_error
    {
      public:
        NotImplementedException();

        explicit NotImplementedException(const std::string &s);
    };
}

#endif //OBSERVABLEAPI_NOTIMPLEMENTEDEXCEPTION_HPP
