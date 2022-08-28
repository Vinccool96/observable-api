//
// Created by Vincent on 2022-03-11.
//

#include "NotImplementedException.hpp"

observable::exceptions::NotImplementedException::NotImplementedException() :
        std::logic_error("This function isn't implemented")
{
}

observable::exceptions::NotImplementedException::NotImplementedException(const std::string &s) : std::logic_error(s)
{
}
