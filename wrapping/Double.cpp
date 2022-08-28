//
// Created by Vincent on 2022-04-01.
//

#include "Number.hpp"

wrapping::Double::Double(double value) : value(value)
{
}

wrapping::Double::Double(const wrapping::Number *value) : value(value->doubleValue())
{
}

double wrapping::Double::doubleValue() const
{
    return this->value;
}

float wrapping::Double::floatValue() const
{
    return (float) this->value;
}

long wrapping::Double::longValue() const
{
    return (long) this->value;
}

int wrapping::Double::intValue() const
{
    return (int) this->value;
}

short wrapping::Double::shortValue() const
{
    return (short) this->value;
}

wrapping::Double *wrapping::Double::operator+(const wrapping::Number *other) const
{
    return new Double(this->value + other->doubleValue());
}

wrapping::Double *wrapping::Double::operator+(double other) const
{
    return new Double(this->value + (double) other);
}

wrapping::Double *wrapping::Double::operator+(float other) const
{
    return new Double(this->value + (double) other);
}

wrapping::Double *wrapping::Double::operator+(long other) const
{
    return new Double(this->value + (double) other);
}

wrapping::Double *wrapping::Double::operator+(int other) const
{
    return new Double(this->value + (double) other);
}

wrapping::Double *wrapping::Double::operator+(short other) const
{
    return new Double(this->value + (double) other);
}

wrapping::Double *wrapping::Double::operator-(const wrapping::Number *other) const
{
    return new Double(this->value - other->doubleValue());
}

wrapping::Double *wrapping::Double::operator-(double other) const
{
    return new Double(this->value - (double) other);
}

wrapping::Double *wrapping::Double::operator-(float other) const
{
    return new Double(this->value - (double) other);
}

wrapping::Double *wrapping::Double::operator-(long other) const
{
    return new Double(this->value - (double) other);
}

wrapping::Double *wrapping::Double::operator-(int other) const
{
    return new Double(this->value - (double) other);
}

wrapping::Double *wrapping::Double::operator-(short other) const
{
    return new Double(this->value - (double) other);
}

wrapping::Double *wrapping::Double::operator*(const wrapping::Number *other) const
{
    return new Double(this->value * other->doubleValue());
}

wrapping::Double *wrapping::Double::operator*(double other) const
{
    return new Double(this->value * (double) other);
}

wrapping::Double *wrapping::Double::operator*(float other) const
{
    return new Double(this->value * (double) other);
}

wrapping::Double *wrapping::Double::operator*(long other) const
{
    return new Double(this->value * (double) other);
}

wrapping::Double *wrapping::Double::operator*(int other) const
{
    return new Double(this->value * (double) other);
}

wrapping::Double *wrapping::Double::operator*(short other) const
{
    return new Double(this->value * (double) other);
}

wrapping::Double *wrapping::Double::operator/(const wrapping::Number *other) const
{
    return new Double(this->value / other->doubleValue());
}

wrapping::Double *wrapping::Double::operator/(double other) const
{
    return new Double(this->value / (double) other);
}

wrapping::Double *wrapping::Double::operator/(float other) const
{
    return new Double(this->value / (double) other);
}

wrapping::Double *wrapping::Double::operator/(long other) const
{
    return new Double(this->value / (double) other);
}

wrapping::Double *wrapping::Double::operator/(int other) const
{
    return new Double(this->value / (double) other);
}

wrapping::Double *wrapping::Double::operator/(short other) const
{
    return new Double(this->value / (double) other);
}

bool wrapping::Double::operator==(const wrapping::Number *other) const
{
    return this->value == other->doubleValue();
}

bool wrapping::Double::operator==(double other) const
{
    return this->value == other;
}

bool wrapping::Double::operator==(float other) const
{
    return this->value == other;
}

bool wrapping::Double::operator==(long other) const
{
    return this->value == (double) other;
}

bool wrapping::Double::operator==(int other) const
{
    return this->value == other;
}

bool wrapping::Double::operator==(short other) const
{
    return this->value == other;
}

bool wrapping::Double::operator!=(const wrapping::Number *other) const
{
    return this->value != other->doubleValue();
}

bool wrapping::Double::operator!=(double other) const
{
    return this->value != other;
}

bool wrapping::Double::operator!=(float other) const
{
    return this->value != other;
}

bool wrapping::Double::operator!=(long other) const
{
    return this->value != (double) other;
}

bool wrapping::Double::operator!=(int other) const
{
    return this->value != other;
}

bool wrapping::Double::operator!=(short other) const
{
    return this->value != other;
}

bool wrapping::Double::operator<(const wrapping::Number *other) const
{
    return this->value < other->doubleValue();
}

bool wrapping::Double::operator<(double other) const
{
    return this->value < other;
}

bool wrapping::Double::operator<(float other) const
{
    return this->value < other;
}

bool wrapping::Double::operator<(long other) const
{
    return this->value < (double) other;
}

bool wrapping::Double::operator<(int other) const
{
    return this->value < other;
}

bool wrapping::Double::operator<(short other) const
{
    return this->value < other;
}

bool wrapping::Double::operator<=(const wrapping::Number *other) const
{
    return this->value <= other->doubleValue();
}

bool wrapping::Double::operator<=(double other) const
{
    return this->value <= other;
}

bool wrapping::Double::operator<=(float other) const
{
    return this->value <= other;
}

bool wrapping::Double::operator<=(long other) const
{
    return this->value <= (double) other;
}

bool wrapping::Double::operator<=(int other) const
{
    return this->value <= other;
}

bool wrapping::Double::operator<=(short other) const
{
    return this->value <= other;
}

bool wrapping::Double::operator>(const wrapping::Number *other) const
{
    return this->value > other->doubleValue();
}

bool wrapping::Double::operator>(double other) const
{
    return this->value > other;
}

bool wrapping::Double::operator>(float other) const
{
    return this->value > other;
}

bool wrapping::Double::operator>(long other) const
{
    return this->value > (double) other;
}

bool wrapping::Double::operator>(int other) const
{
    return this->value > other;
}

bool wrapping::Double::operator>(short other) const
{
    return this->value > other;
}

bool wrapping::Double::operator>=(const wrapping::Number *other) const
{
    return this->value >= other->doubleValue();
}

bool wrapping::Double::operator>=(double other) const
{
    return this->value >= other;
}

bool wrapping::Double::operator>=(float other) const
{
    return this->value >= other;
}

bool wrapping::Double::operator>=(long other) const
{
    return this->value >= (double) other;
}

bool wrapping::Double::operator>=(int other) const
{
    return this->value >= other;
}

bool wrapping::Double::operator>=(short other) const
{
    return this->value >= other;
}

void wrapping::Double::operator++()
{
    ++this->value;
}

void wrapping::Double::operator++(int i)
{
    this->value++;
}

void wrapping::Double::operator--()
{
    --this->value;
}

void wrapping::Double::operator--(int i)
{
    this->value--;
}
