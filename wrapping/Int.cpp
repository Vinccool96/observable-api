//
// Created by Vincent on 2022-04-01.
//

#include "Number.hpp"

#include "../verif/verif.hpp"

using namespace verif;

wrapping::Int::Int(int value) : value(value)
{
}

wrapping::Int::Int(const wrapping::Number *value) : value(value->intValue())
{
}

double wrapping::Int::doubleValue() const{
    return this->value;
}

float wrapping::Int::floatValue() const
{
    return (float) this->value;
}

long wrapping::Int::longValue() const
{
    return this->value;
}

int wrapping::Int::intValue() const
{
    return this->value;
}

short wrapping::Int::shortValue() const
{
    return (short) this->value;
}

wrapping::Number *wrapping::Int::operator+(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return new Double(this->doubleValue() + other->doubleValue());
    }
    else if (instanceof<Float>(other))
    {
        return new Float(this->floatValue() + other->floatValue());
    }
    else if (instanceof<Long>(other))
    {
        return new Long(this->longValue() + other->longValue());
    }
    else
    {
        return new Int(this->value + other->intValue());
    }
}

wrapping::Double *wrapping::Int::operator+(double other) const
{
    return new Double(this->doubleValue() + other);
}

wrapping::Float *wrapping::Int::operator+(float other) const
{
    return new Float(this->floatValue() + other);
}

wrapping::Long *wrapping::Int::operator+(long other) const
{
    return new Long(this->longValue() + other);
}

wrapping::Int *wrapping::Int::operator+(int other) const
{
    return new Int(this->value + other);
}

wrapping::Int *wrapping::Int::operator+(short other) const
{
    return new Int(this->value + other);
}

wrapping::Number *wrapping::Int::operator-(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return new Double(this->doubleValue() - other->doubleValue());
    }
    else if (instanceof<Float>(other))
    {
        return new Float(this->floatValue() - other->floatValue());
    }
    else if (instanceof<Long>(other))
    {
        return new Long(this->longValue() - other->longValue());
    }
    else
    {
        return new Int(this->value - other->intValue());
    }
}

wrapping::Double *wrapping::Int::operator-(double other) const
{
    return new Double(this->doubleValue() - other);
}

wrapping::Float *wrapping::Int::operator-(float other) const
{
    return new Float(this->floatValue() - other);
}

wrapping::Long *wrapping::Int::operator-(long other) const
{
    return new Long(this->longValue() - other);
}

wrapping::Int *wrapping::Int::operator-(int other) const
{
    return new Int(this->value - other);
}

wrapping::Int *wrapping::Int::operator-(short other) const
{
    return new Int(this->value - other);
}

wrapping::Number *wrapping::Int::operator*(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return new Double(this->doubleValue() * other->doubleValue());
    }
    else if (instanceof<Float>(other))
    {
        return new Float(this->floatValue() * other->floatValue());
    }
    else if (instanceof<Long>(other))
    {
        return new Long(this->longValue() * other->longValue());
    }
    else
    {
        return new Int(this->value * other->intValue());
    }
}

wrapping::Double *wrapping::Int::operator*(double other) const
{
    return new Double(this->doubleValue() * other);
}

wrapping::Float *wrapping::Int::operator*(float other) const
{
    return new Float(this->floatValue() * other);
}

wrapping::Long *wrapping::Int::operator*(long other) const
{
    return new Long(this->longValue() * other);
}

wrapping::Int *wrapping::Int::operator*(int other) const
{
    return new Int(this->value * other);
}

wrapping::Int *wrapping::Int::operator*(short other) const
{
    return new Int(this->value * other);
}

wrapping::Number *wrapping::Int::operator/(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return new Double(this->doubleValue() / other->doubleValue());
    }
    else if (instanceof<Float>(other))
    {
        return new Float(this->floatValue() / other->floatValue());
    }
    else if (instanceof<Long>(other))
    {
        return new Long(this->longValue() / other->longValue());
    }
    else
    {
        return new Int(this->value / other->intValue());
    }
}

wrapping::Double *wrapping::Int::operator/(double other) const
{
    return new Double(this->doubleValue() / other);
}

wrapping::Float *wrapping::Int::operator/(float other) const
{
    return new Float(this->floatValue() / other);
}

wrapping::Long *wrapping::Int::operator/(long other) const
{
    return new Long(this->longValue() / other);
}

wrapping::Int *wrapping::Int::operator/(int other) const
{
    return new Int(this->value / other);
}

wrapping::Int *wrapping::Int::operator/(short other) const
{
    return new Int(this->value / other);
}

wrapping::Integer *wrapping::Int::operator%(wrapping::Integer *other) const
{
    if (instanceof<Long>(other))
    {
        return new Long(this->longValue() % other->longValue());
    }
    else
    {
        return new Int(this->value % other->intValue());
    }
}

wrapping::Long *wrapping::Int::operator%(long other) const
{
    return new Long(this->longValue() % other);
}

wrapping::Int *wrapping::Int::operator%(int other) const
{
    return new Int(this->value % other);
}

wrapping::Int *wrapping::Int::operator%(short other) const
{
    return new Int(this->value % other);
}

bool wrapping::Int::operator==(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return this->doubleValue() == other->doubleValue();
    }
    else if (instanceof<Float>(other))
    {
        return this->floatValue() == other->floatValue();
    }
    else if (instanceof<Long>(other))
    {
        return this->longValue() == other->longValue();
    }
    else
    {
        return this->value == other->intValue();
    }
}

bool wrapping::Int::operator==(double other) const
{
    return this->doubleValue() == other;
}

bool wrapping::Int::operator==(float other) const
{
    return this->floatValue() == other;
}

bool wrapping::Int::operator==(long other) const
{
    return this->longValue() == other;
}

bool wrapping::Int::operator==(int other) const
{
    return this->value == other;
}

bool wrapping::Int::operator==(short other) const
{
    return this->value == other;
}

bool wrapping::Int::operator!=(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return this->doubleValue() != other->doubleValue();
    }
    else if (instanceof<Float>(other))
    {
        return this->floatValue() != other->floatValue();
    }
    else if (instanceof<Long>(other))
    {
        return this->longValue() != other->longValue();
    }
    else
    {
        return this->value != other->intValue();
    }
}

bool wrapping::Int::operator!=(double other) const
{
    return this->doubleValue() != other;
}

bool wrapping::Int::operator!=(float other) const
{
    return this->floatValue() != other;
}

bool wrapping::Int::operator!=(long other) const
{
    return this->longValue() != other;
}

bool wrapping::Int::operator!=(int other) const
{
    return this->value != other;
}

bool wrapping::Int::operator!=(short other) const
{
    return this->value != other;
}

bool wrapping::Int::operator<(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return this->doubleValue() < other->doubleValue();
    }
    else if (instanceof<Float>(other))
    {
        return this->floatValue() < other->floatValue();
    }
    else if (instanceof<Long>(other))
    {
        return this->longValue() < other->longValue();
    }
    else
    {
        return this->value < other->intValue();
    }
}

bool wrapping::Int::operator<(double other) const
{
    return this->doubleValue() < other;
}

bool wrapping::Int::operator<(float other) const
{
    return this->floatValue() < other;
}

bool wrapping::Int::operator<(long other) const
{
    return this->longValue() < other;
}

bool wrapping::Int::operator<(int other) const
{
    return this->value < other;
}

bool wrapping::Int::operator<(short other) const
{
    return this->value < other;
}

bool wrapping::Int::operator<=(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return this->doubleValue() <= other->doubleValue();
    }
    else if (instanceof<Float>(other))
    {
        return this->floatValue() <= other->floatValue();
    }
    else if (instanceof<Long>(other))
    {
        return this->longValue() <= other->longValue();
    }
    else
    {
        return this->value <= other->intValue();
    }
}

bool wrapping::Int::operator<=(double other) const
{
    return this->doubleValue() <= other;
}

bool wrapping::Int::operator<=(float other) const
{
    return this->floatValue() <= other;
}

bool wrapping::Int::operator<=(long other) const
{
    return this->longValue() <= other;
}

bool wrapping::Int::operator<=(int other) const
{
    return this->value <= other;
}

bool wrapping::Int::operator<=(short other) const
{
    return this->value <= other;
}

bool wrapping::Int::operator>(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return this->doubleValue() > other->doubleValue();
    }
    else if (instanceof<Float>(other))
    {
        return this->floatValue() > other->floatValue();
    }
    else if (instanceof<Long>(other))
    {
        return this->longValue() > other->longValue();
    }
    else
    {
        return this->value > other->intValue();
    }
}

bool wrapping::Int::operator>(double other) const
{
    return this->doubleValue() > other;
}

bool wrapping::Int::operator>(float other) const
{
    return this->floatValue() > other;
}

bool wrapping::Int::operator>(long other) const
{
    return this->longValue() > other;
}

bool wrapping::Int::operator>(int other) const
{
    return this->value > other;
}

bool wrapping::Int::operator>(short other) const
{
    return this->value > other;
}

bool wrapping::Int::operator>=(const wrapping::Number *other) const
{
    if (instanceof<Double>(other))
    {
        return this->doubleValue() >= other->doubleValue();
    }
    else if (instanceof<Float>(other))
    {
        return this->floatValue() >= other->floatValue();
    }
    else if (instanceof<Long>(other))
    {
        return this->longValue() >= other->longValue();
    }
    else
    {
        return this->value >= other->intValue();
    }
}

bool wrapping::Int::operator>=(double other) const
{
    return this->doubleValue() >= other;
}

bool wrapping::Int::operator>=(float other) const
{
    return this->floatValue() >= other;
}

bool wrapping::Int::operator>=(long other) const
{
    return this->longValue() >= other;
}

bool wrapping::Int::operator>=(int other) const
{
    return this->value >= other;
}

bool wrapping::Int::operator>=(short other) const
{
    return this->value >= other;
}

void wrapping::Int::operator++()
{
    ++this->value;
}

void wrapping::Int::operator++(int i)
{
    this->value++;
}

void wrapping::Int::operator--()
{
    --this->value;
}

void wrapping::Int::operator--(int i)
{
    this->value--;
}
