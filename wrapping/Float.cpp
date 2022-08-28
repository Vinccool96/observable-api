//
// Created by Vincent on 2022-04-01.
//

#include "Number.hpp"

#include "../verif/verif.hpp"

using namespace verif;

wrapping::Float::Float(float value) : value(value)
{
}

wrapping::Float::Float(const wrapping::Number *value) : value(value->floatValue())
{
}

double wrapping::Float::doubleValue() const
{
    return this->value;
}

float wrapping::Float::floatValue() const
{
    return this->value;
}

long wrapping::Float::longValue() const
{
    return (long) this->value;
}

int wrapping::Float::intValue() const
{
    return (int) this->value;
}

short wrapping::Float::shortValue() const
{
    return (short) this->value;
}

wrapping::Number *wrapping::Float::operator+(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return new Double(this->doubleValue() + other->doubleValue());
    }
    else
    {
        return new Float(this->value + other->floatValue());
    }
}

wrapping::Double *wrapping::Float::operator+(double other) const
{
    return new Double(this->doubleValue() + other);
}

wrapping::Float *wrapping::Float::operator+(float other) const
{
    return new Float(this->value + other);
}

wrapping::Float *wrapping::Float::operator+(long other) const
{
    return new Float(this->value + (float) other);
}

wrapping::Float *wrapping::Float::operator+(int other) const
{
    return new Float(this->value + (float) other);
}

wrapping::Float *wrapping::Float::operator+(short other) const
{
    return new Float(this->value + (float) other);
}

wrapping::Number *wrapping::Float::operator-(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return new Double(this->doubleValue() - other->doubleValue());
    }
    else
    {
        return new Float(this->value - other->floatValue());
    }
}

wrapping::Double *wrapping::Float::operator-(double other) const
{
    return new Double(this->value - other);
}

wrapping::Float *wrapping::Float::operator-(float other) const
{
    return new Float(this->value - other);
}

wrapping::Float *wrapping::Float::operator-(long other) const
{
    return new Float(this->value - (float) other);
}

wrapping::Float *wrapping::Float::operator-(int other) const
{
    return new Float(this->value - (float) other);
}

wrapping::Float *wrapping::Float::operator-(short other) const
{
    return new Float(this->value - (float) other);
}

wrapping::Number *wrapping::Float::operator*(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return new Double(this->doubleValue() * other->doubleValue());
    }
    else
    {
        return new Float(this->value * other->floatValue());
    }
}

wrapping::Double *wrapping::Float::operator*(double other) const
{
    return new Double(this->value * other);
}

wrapping::Float *wrapping::Float::operator*(float other) const
{
    return new Float(this->value * other);
}

wrapping::Float *wrapping::Float::operator*(long other) const
{
    return new Float(this->value * (float) other);
}

wrapping::Float *wrapping::Float::operator*(int other) const
{
    return new Float(this->value * (float) other);
}

wrapping::Float *wrapping::Float::operator*(short other) const
{
    return new Float(this->value * (float) other);
}

wrapping::Number *wrapping::Float::operator/(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return new Double(this->doubleValue() / other->doubleValue());
    }
    else
    {
        return new Float(this->value / other->floatValue());
    }
}

wrapping::Double *wrapping::Float::operator/(double other) const
{
    return new Double(this->value / other);
}

wrapping::Float *wrapping::Float::operator/(float other) const
{
    return new Float(this->value / other);
}

wrapping::Float *wrapping::Float::operator/(long other) const
{
    return new Float(this->value / (float) other);
}

wrapping::Float *wrapping::Float::operator/(int other) const
{
    return new Float(this->value / (float) other);
}

wrapping::Float *wrapping::Float::operator/(short other) const
{
    return new Float(this->value / (float) other);
}

bool wrapping::Float::operator==(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return this->doubleValue() == other->doubleValue();
    }
    else
    {
        return this->value == other->floatValue();
    }
}

bool wrapping::Float::operator==(double other) const
{
    return this->value == other;
}

bool wrapping::Float::operator==(float other) const
{
    return this->value == other;
}

bool wrapping::Float::operator==(long other) const
{
    return this->value == (float) other;
}

bool wrapping::Float::operator==(int other) const
{
    return this->value == (float) other;
}

bool wrapping::Float::operator==(short other) const
{
    return this->value == (float) other;
}

bool wrapping::Float::operator!=(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return this->doubleValue() != other->doubleValue();
    }
    else
    {
        return this->value != other->floatValue();
    }
}

bool wrapping::Float::operator!=(double other) const
{
    return this->value != other;
}

bool wrapping::Float::operator!=(float other) const
{
    return this->value != other;
}

bool wrapping::Float::operator!=(long other) const
{
    return this->value != (float) other;
}

bool wrapping::Float::operator!=(int other) const
{
    return this->value != (float) other;
}

bool wrapping::Float::operator!=(short other) const
{
    return this->value != (float) other;
}

bool wrapping::Float::operator<(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return this->doubleValue() < other->doubleValue();
    }
    else
    {
        return this->value < other->floatValue();
    }
}

bool wrapping::Float::operator<(double other) const
{
    return this->value < other;
}

bool wrapping::Float::operator<(float other) const
{
    return this->value < other;
}

bool wrapping::Float::operator<(long other) const
{
    return this->value < (float) other;
}

bool wrapping::Float::operator<(int other) const
{
    return this->value < (float) other;
}

bool wrapping::Float::operator<(short other) const
{
    return this->value < (float) other;
}

bool wrapping::Float::operator<=(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return this->doubleValue() <= other->doubleValue();
    }
    else
    {
        return this->value <= other->floatValue();
    }
}

bool wrapping::Float::operator<=(double other) const
{
    return this->value <= other;
}

bool wrapping::Float::operator<=(float other) const
{
    return this->value <= other;
}

bool wrapping::Float::operator<=(long other) const
{
    return this->value <= (float) other;
}

bool wrapping::Float::operator<=(int other) const
{
    return this->value <= (float) other;
}

bool wrapping::Float::operator<=(short other) const
{
    return this->value <= (float) other;
}

bool wrapping::Float::operator>(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return this->doubleValue() > other->doubleValue();
    }
    else
    {
        return this->value > other->floatValue();
    }
}

bool wrapping::Float::operator>(double other) const
{
    return this->value > other;
}

bool wrapping::Float::operator>(float other) const
{
    return this->value > other;
}

bool wrapping::Float::operator>(long other) const
{
    return this->value > (float) other;
}

bool wrapping::Float::operator>(int other) const
{
    return this->value > (float) other;
}

bool wrapping::Float::operator>(short other) const
{
    return this->value > (float) other;
}

bool wrapping::Float::operator>=(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return this->doubleValue() >= other->doubleValue();
    }
    else
    {
        return this->value >= other->floatValue();
    }
}

bool wrapping::Float::operator>=(double other) const
{
    return this->value >= other;
}

bool wrapping::Float::operator>=(float other) const
{
    return this->value >= other;
}

bool wrapping::Float::operator>=(long other) const
{
    return this->value >= (float) other;
}

bool wrapping::Float::operator>=(int other) const
{
    return this->value >= (float) other;
}

bool wrapping::Float::operator>=(short other) const
{
    return this->value >= (float) other;
}

void wrapping::Float::operator++()
{
    ++this->value;
}

void wrapping::Float::operator++(int i)
{
    this->value++;
}

void wrapping::Float::operator--()
{
    --this->value;
}

void wrapping::Float::operator--(int i)
{
    this->value--;
}
