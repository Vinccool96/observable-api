//
// Created by Vincent on 2022-04-01.
//

#include "Number.hpp"

#include "../verif/verif.hpp"

using namespace verif;

wrapping::Long::Long(long value) : value(value)
{
}

wrapping::Long::Long(const wrapping::Number *value) : value(value->longValue())
{
}

double wrapping::Long::doubleValue() const
{
    return (double) this->value;
}

float wrapping::Long::floatValue() const
{
    return (float) this->value;
}

long wrapping::Long::longValue() const
{
    return this->value;
}

int wrapping::Long::intValue() const
{
    return (int) this->value;
}

short wrapping::Long::shortValue() const
{
    return (short) this->value;
}

wrapping::Number *wrapping::Long::operator+(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return new Double(this->doubleValue() + other->doubleValue());
    }
    else if (instanceof<Float>(other))
    {
        return new Float(this->floatValue() + other->floatValue());
    }
    else
    {
        return new Long(this->value + other->longValue());
    }
}

wrapping::Double *wrapping::Long::operator+(double other) const
{
    return new Double(this->doubleValue() + other);
}

wrapping::Float *wrapping::Long::operator+(float other) const
{
    return new Float(this->floatValue() + other);
}

wrapping::Long *wrapping::Long::operator+(long other) const
{
    return new Long(this->value + other);
}

wrapping::Long *wrapping::Long::operator+(int other) const
{
    return new Long(this->value + other);
}

wrapping::Long *wrapping::Long::operator+(short other) const
{
    return new Long(this->value + other);
}

wrapping::Number *wrapping::Long::operator-(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return new Double(this->doubleValue() - other->doubleValue());
    }
    else if (instanceof<Float>(other))
    {
        return new Float(this->floatValue() - other->floatValue());
    }
    else
    {
        return new Long(this->value - other->longValue());
    }
}

wrapping::Double *wrapping::Long::operator-(double other) const
{
    return new Double(this->doubleValue() - other);
}

wrapping::Float *wrapping::Long::operator-(float other) const
{
    return new Float(this->floatValue() - other);
}

wrapping::Long *wrapping::Long::operator-(long other) const
{
    return new Long(this->value - other);
}

wrapping::Long *wrapping::Long::operator-(int other) const
{
    return new Long(this->value - other);
}

wrapping::Long *wrapping::Long::operator-(short other) const
{
    return new Long(this->value - other);
}

wrapping::Number *wrapping::Long::operator*(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return new Double(this->doubleValue() * other->doubleValue());
    }
    else if (instanceof<Float>(other))
    {
        return new Float(this->floatValue() * other->floatValue());
    }
    else
    {
        return new Long(this->value * other->longValue());
    }
}

wrapping::Double *wrapping::Long::operator*(double other) const
{
    return new Double(this->doubleValue() * other);
}

wrapping::Float *wrapping::Long::operator*(float other) const
{
    return new Float(this->floatValue() * other);
}

wrapping::Long *wrapping::Long::operator*(long other) const
{
    return new Long(this->value * other);
}

wrapping::Long *wrapping::Long::operator*(int other) const
{
    return new Long(this->value * other);
}

wrapping::Long *wrapping::Long::operator*(short other) const
{
    return new Long(this->value * other);
}

wrapping::Number *wrapping::Long::operator/(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return new Double(this->doubleValue() / other->doubleValue());
    }
    else if (instanceof<Float>(other))
    {
        return new Float(this->floatValue() / other->floatValue());
    }
    else
    {
        return new Long(this->value / other->longValue());
    }
}

wrapping::Double *wrapping::Long::operator/(double other) const
{
    return new Double(this->doubleValue() / other);
}

wrapping::Float *wrapping::Long::operator/(float other) const
{
    return new Float(this->floatValue() / other);
}

wrapping::Long *wrapping::Long::operator/(long other) const
{
    return new Long(this->value / other);
}

wrapping::Long *wrapping::Long::operator/(int other) const
{
    return new Long(this->value / other);
}

wrapping::Long *wrapping::Long::operator/(short other) const
{
    return new Long(this->value / other);
}

wrapping::Long *wrapping::Long::operator%(wrapping::Integer *other) const
{
    return new Long(this->value % other->longValue());
}

wrapping::Long *wrapping::Long::operator%(long other) const
{
    return new Long(this->value % other);
}

wrapping::Long *wrapping::Long::operator%(int other) const
{
    return new Long(this->value % other);
}

wrapping::Long *wrapping::Long::operator%(short other) const
{
    return new Long(this->value % other);
}

bool wrapping::Long::operator==(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return this->doubleValue() == other->doubleValue();
    }
    else if (instanceof<Float>(other))
    {
        return this->floatValue() == other->floatValue();
    }
    else
    {
        return this->value == other->longValue();
    }
}

bool wrapping::Long::operator==(double other) const
{
    return this->doubleValue() == other;
}

bool wrapping::Long::operator==(float other) const
{
    return this->floatValue() == other;
}

bool wrapping::Long::operator==(long other) const
{
    return this->value == other;
}

bool wrapping::Long::operator==(int other) const
{
    return this->value == other;
}

bool wrapping::Long::operator==(short other) const
{
    return this->value == other;
}

bool wrapping::Long::operator!=(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return this->doubleValue() != other->doubleValue();
    }
    else if (instanceof<Float>(other))
    {
        return this->floatValue() != other->floatValue();
    }
    else
    {
        return this->value != other->longValue();
    }
}

bool wrapping::Long::operator!=(double other) const
{
    return this->doubleValue() != other;
}

bool wrapping::Long::operator!=(float other) const
{
    return this->floatValue() != other;
}

bool wrapping::Long::operator!=(long other) const
{
    return this->value != other;
}

bool wrapping::Long::operator!=(int other) const
{
    return this->value != other;
}

bool wrapping::Long::operator!=(short other) const
{
    return this->value != other;
}

bool wrapping::Long::operator<(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return this->doubleValue() < other->doubleValue();
    }
    else if (instanceof<Float>(other))
    {
        return this->floatValue() < other->floatValue();
    }
    else
    {
        return this->value < other->longValue();
    }
}

bool wrapping::Long::operator<(double other) const
{
    return this->doubleValue() < other;
}

bool wrapping::Long::operator<(float other) const
{
    return this->floatValue() < other;
}

bool wrapping::Long::operator<(long other) const
{
    return this->value < other;
}

bool wrapping::Long::operator<(int other) const
{
    return this->value < other;
}

bool wrapping::Long::operator<(short other) const
{
    return this->value < other;
}

bool wrapping::Long::operator<=(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return this->doubleValue() <= other->doubleValue();
    }
    else if (instanceof<Float>(other))
    {
        return this->floatValue() <= other->floatValue();
    }
    else
    {
        return this->value <= other->longValue();
    }
}

bool wrapping::Long::operator<=(double other) const
{
    return this->doubleValue() <= other;
}

bool wrapping::Long::operator<=(float other) const
{
    return this->floatValue() <= other;
}

bool wrapping::Long::operator<=(long other) const
{
    return this->value <= other;
}

bool wrapping::Long::operator<=(int other) const
{
    return this->value <= other;
}

bool wrapping::Long::operator<=(short other) const
{
    return this->value <= other;
}

bool wrapping::Long::operator>(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return this->doubleValue() > other->doubleValue();
    }
    else if (instanceof<Float>(other))
    {
        return this->floatValue() > other->floatValue();
    }
    else
    {
        return this->value > other->longValue();
    }
}

bool wrapping::Long::operator>(double other) const
{
    return this->doubleValue() > other;
}

bool wrapping::Long::operator>(float other) const
{
    return this->floatValue() > other;
}

bool wrapping::Long::operator>(long other) const
{
    return this->value > other;
}

bool wrapping::Long::operator>(int other) const
{
    return this->value > other;
}

bool wrapping::Long::operator>(short other) const
{
    return this->value > other;
}

bool wrapping::Long::operator>=(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return this->doubleValue() >= other->doubleValue();
    }
    else if (instanceof<Float>(other))
    {
        return this->floatValue() >= other->floatValue();
    }
    else
    {
        return this->value >= other->longValue();
    }
}

bool wrapping::Long::operator>=(double other) const
{
    return this->doubleValue() >= other;
}

bool wrapping::Long::operator>=(float other) const
{
    return this->floatValue() >= other;
}

bool wrapping::Long::operator>=(long other) const
{
    return this->value >= other;
}

bool wrapping::Long::operator>=(int other) const
{
    return this->value >= other;
}

bool wrapping::Long::operator>=(short other) const
{
    return this->value >= other;
}

void wrapping::Long::operator++()
{
    ++this->value;
}

void wrapping::Long::operator++(int i)
{
    this->value++;
}

void wrapping::Long::operator--()
{
    --this->value;
}

void wrapping::Long::operator--(int i)
{
    this->value--;
}
