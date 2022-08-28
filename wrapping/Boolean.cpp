//
// Created by Vincent on 2022-08-27.
//

#include "Boolean.hpp"

wrapping::Boolean::Boolean(bool value) : value(value)
{
}

wrapping::Boolean::Boolean(const Boolean *value) : value(value->getValue())
{
}

bool wrapping::Boolean::getValue() const
{
    return this->value;
}
