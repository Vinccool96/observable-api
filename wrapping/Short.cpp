//
// Created by Vincent on 2022-04-01.
//

#include "Number.hpp"

#include "../verif/verif.hpp"

using namespace verif;

wrapping::Short::Short(short value) : value(value)
{
}

wrapping::Short::Short(const wrapping::Number *value) : value(value->shortValue())
{
}

double wrapping::Short::doubleValue() const
{
    return this->value;
}

float wrapping::Short::floatValue() const
{
    return this->value;
}

long wrapping::Short::longValue() const
{
    return this->value;
}

int wrapping::Short::intValue() const
{
    return this->value;
}

short wrapping::Short::shortValue() const
{
    return (short) this->value;
}

wrapping::Number *wrapping::Short::operator+(const wrapping::Number *other) const
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

wrapping::Double *wrapping::Short::operator+(double other) const
{
    return new Double(this->doubleValue() + other);
}

wrapping::Float *wrapping::Short::operator+(float other) const
{
    return new Float(this->floatValue() + other);
}

wrapping::Long *wrapping::Short::operator+(long other) const
{
    return new Long(this->longValue() + other);
}

wrapping::Int *wrapping::Short::operator+(int other) const
{
    return new Int(this->value + other);
}

wrapping::Int *wrapping::Short::operator+(short other) const
{
    return new Int(this->value + other);
}

wrapping::Number *wrapping::Short::operator-(const wrapping::Number *other) const
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

wrapping::Double *wrapping::Short::operator-(double other) const
{
    return new Double(this->doubleValue() - other);
}

wrapping::Float *wrapping::Short::operator-(float other) const
{
    return new Float(this->floatValue() - other);
}

wrapping::Long *wrapping::Short::operator-(long other) const
{
    return new Long(this->longValue() - other);
}

wrapping::Int *wrapping::Short::operator-(int other) const
{
    return new Int(this->value - other);
}

wrapping::Int *wrapping::Short::operator-(short other) const
{
    return new Int(this->value - other);
}

wrapping::Number *wrapping::Short::operator*(const wrapping::Number *other) const
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

wrapping::Double *wrapping::Short::operator*(double other) const
{
    return new Double(this->doubleValue() * other);
}

wrapping::Float *wrapping::Short::operator*(float other) const
{
    return new Float(this->floatValue() * other);
}

wrapping::Long *wrapping::Short::operator*(long other) const
{
    return new Long(this->longValue() * other);
}

wrapping::Int *wrapping::Short::operator*(int other) const
{
    return new Int(this->value * other);
}

wrapping::Int *wrapping::Short::operator*(short other) const
{
    return new Int(this->value * other);
}

wrapping::Number *wrapping::Short::operator/(const wrapping::Number *other) const
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

wrapping::Double *wrapping::Short::operator/(double other) const
{
    return new Double(this->doubleValue() / other);
}

wrapping::Float *wrapping::Short::operator/(float other) const
{
    return new Float(this->floatValue() / other);
}

wrapping::Long *wrapping::Short::operator/(long other) const
{
    return new Long(this->longValue() / other);
}

wrapping::Int *wrapping::Short::operator/(int other) const
{
    return new Int(this->value / other);
}

wrapping::Int *wrapping::Short::operator/(short other) const
{
    return new Int(this->value / other);
}

wrapping::Integer *wrapping::Short::operator%(wrapping::Integer *other) const
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

wrapping::Long *wrapping::Short::operator%(long other) const
{
    return new Long(this->longValue() % other);
}

wrapping::Int *wrapping::Short::operator%(int other) const
{
    return new Int(this->value % other);
}

wrapping::Int *wrapping::Short::operator%(short other) const
{
    return new Int(this->value % other);
}

bool wrapping::Short::operator==(const wrapping::Number *other) const
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

bool wrapping::Short::operator==(double other) const
{
    return this->doubleValue() == other;
}

bool wrapping::Short::operator==(float other) const
{
    return this->floatValue() == other;
}

bool wrapping::Short::operator==(long other) const
{
    return this->longValue() == other;
}

bool wrapping::Short::operator==(int other) const
{
    return this->value == other;
}

bool wrapping::Short::operator==(short other) const
{
    return this->value == other;
}

bool wrapping::Short::operator!=(const wrapping::Number *other) const
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

bool wrapping::Short::operator!=(double other) const
{
    return this->doubleValue() != other;
}

bool wrapping::Short::operator!=(float other) const
{
    return this->floatValue() != other;
}

bool wrapping::Short::operator!=(long other) const
{
    return this->longValue() != other;
}

bool wrapping::Short::operator!=(int other) const
{
    return this->value != other;
}

bool wrapping::Short::operator!=(short other) const
{
    return this->value != other;
}

bool wrapping::Short::operator<(const wrapping::Number *other) const
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

bool wrapping::Short::operator<(double other) const
{
    return this->doubleValue() < other;
}

bool wrapping::Short::operator<(float other) const
{
    return this->floatValue() < other;
}

bool wrapping::Short::operator<(long other) const
{
    return this->longValue() < other;
}

bool wrapping::Short::operator<(int other) const
{
    return this->value < other;
}

bool wrapping::Short::operator<(short other) const
{
    return this->value < other;
}

bool wrapping::Short::operator<=(const wrapping::Number *other) const
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

bool wrapping::Short::operator<=(double other) const
{
    return this->doubleValue() <= other;
}

bool wrapping::Short::operator<=(float other) const
{
    return this->floatValue() <= other;
}

bool wrapping::Short::operator<=(long other) const
{
    return this->longValue() <= other;
}

bool wrapping::Short::operator<=(int other) const
{
    return this->value <= other;
}

bool wrapping::Short::operator<=(short other) const
{
    return this->value <= other;
}

bool wrapping::Short::operator>(const wrapping::Number *other) const
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

bool wrapping::Short::operator>(double other) const
{
    return this->doubleValue() > other;
}

bool wrapping::Short::operator>(float other) const
{
    return this->floatValue() > other;
}

bool wrapping::Short::operator>(long other) const
{
    return this->longValue() > other;
}

bool wrapping::Short::operator>(int other) const
{
    return this->value > other;
}

bool wrapping::Short::operator>(short other) const
{
    return this->value > other;
}

bool wrapping::Short::operator>=(const wrapping::Number *other) const
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

bool wrapping::Short::operator>=(double other) const
{
    return this->doubleValue() >= other;
}

bool wrapping::Short::operator>=(float other) const
{
    return this->floatValue() >= other;
}

bool wrapping::Short::operator>=(long other) const
{
    return this->longValue() >= other;
}

bool wrapping::Short::operator>=(int other) const
{
    return this->value >= other;
}

bool wrapping::Short::operator>=(short other) const
{
    return this->value >= other;
}

void wrapping::Short::operator++()
{
    ++this->value;
}

void wrapping::Short::operator++(int i)
{
    this->value++;
}

void wrapping::Short::operator--()
{
    --this->value;
}

void wrapping::Short::operator--(int i)
{
    this->value--;
}
