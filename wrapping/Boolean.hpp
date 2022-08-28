//
// Created by Vincent on 2022-08-27.
//

#ifndef OBSERVABLEAPI_BOOLEAN_HPP
#define OBSERVABLEAPI_BOOLEAN_HPP

namespace wrapping
{

    class Boolean
    {
      public:
        explicit Boolean(bool value);
        explicit Boolean(const Boolean *value);
        bool getValue() const;
      private:
        bool value;
    };

} // wrapping

#endif //OBSERVABLEAPI_BOOLEAN_HPP
