#pragma clang diagnostic push
#pragma ide diagnostic ignored "modernize-use-nodiscard"
//
// Created by Vincent on 2022-04-01.
//

#ifndef OBSERVABLEAPI_NUMBER_HPP
#define OBSERVABLEAPI_NUMBER_HPP

namespace wrapping
{

    class Double;

    class Float;

    class Long;

    class Int;

    class Short;

    class Number
    {
      public:
        /// Returns the value of the specified number as a double, which may involve rounding.
        ///
        /// \return the numeric value represented by this object after conversion to type `double`.
        virtual double doubleValue() const = 0;

        /// Returns the value of the specified number as a float, which may involve rounding.
        ///
        /// \return the numeric value represented by this object after conversion to type `float`.
        virtual float floatValue() const = 0;

        /// Returns the value of the specified number as a long, which may involve rounding or truncation.
        ///
        /// \return the numeric value represented by this object after conversion to type `long`.
        virtual long longValue() const = 0;

        /// Returns the value of the specified number as an int, which may involve rounding or truncation.
        ///
        /// \return the numeric value represented by this object after conversion to type `int`.
        virtual int intValue() const = 0;

        /// Returns the value of the specified number as a short, which may involve rounding or truncation.
        ///
        /// \return the numeric value represented by this object after conversion to type `short`.
        virtual short shortValue() const = 0;

        virtual Number *operator+(const Number *other) const = 0;

        virtual Number *operator+(double other) const = 0;

        virtual Number *operator+(float other) const = 0;

        virtual Number *operator+(long other) const = 0;

        virtual Number *operator+(int other) const = 0;

        virtual Number *operator+(short other) const = 0;

        virtual Number *operator-(const Number *other) const = 0;

        virtual Number *operator-(double other) const = 0;

        virtual Number *operator-(float other) const = 0;

        virtual Number *operator-(long other) const = 0;

        virtual Number *operator-(int other) const = 0;

        virtual Number *operator-(short other) const = 0;

        virtual Number *operator*(const Number *other) const = 0;

        virtual Number *operator*(double other) const = 0;

        virtual Number *operator*(float other) const = 0;

        virtual Number *operator*(long other) const = 0;

        virtual Number *operator*(int other) const = 0;

        virtual Number *operator*(short other) const = 0;

        virtual Number *operator/(const Number *other) const = 0;

        virtual Number *operator/(double other) const = 0;

        virtual Number *operator/(float other) const = 0;

        virtual Number *operator/(long other) const = 0;

        virtual Number *operator/(int other) const = 0;

        virtual Number *operator/(short other) const = 0;

        virtual bool operator==(const Number *other) const = 0;

        virtual bool operator==(double other) const = 0;

        virtual bool operator==(float other) const = 0;

        virtual bool operator==(long other) const = 0;

        virtual bool operator==(int other) const = 0;

        virtual bool operator==(short other) const = 0;

        virtual bool operator!=(const Number *other) const = 0;

        virtual bool operator!=(double other) const = 0;

        virtual bool operator!=(float other) const = 0;

        virtual bool operator!=(long other) const = 0;

        virtual bool operator!=(int other) const = 0;

        virtual bool operator!=(short other) const = 0;

        virtual bool operator<(const Number *other) const = 0;

        virtual bool operator<(double other) const = 0;

        virtual bool operator<(float other) const = 0;

        virtual bool operator<(long other) const = 0;

        virtual bool operator<(int other) const = 0;

        virtual bool operator<(short other) const = 0;

        virtual bool operator<=(const Number *other) const = 0;

        virtual bool operator<=(double other) const = 0;

        virtual bool operator<=(float other) const = 0;

        virtual bool operator<=(long other) const = 0;

        virtual bool operator<=(int other) const = 0;

        virtual bool operator<=(short other) const = 0;

        virtual bool operator>(const Number *other) const = 0;

        virtual bool operator>(double other) const = 0;

        virtual bool operator>(float other) const = 0;

        virtual bool operator>(long other) const = 0;

        virtual bool operator>(int other) const = 0;

        virtual bool operator>(short other) const = 0;

        virtual bool operator>=(const Number *other) const = 0;

        virtual bool operator>=(double other) const = 0;

        virtual bool operator>=(float other) const = 0;

        virtual bool operator>=(long other) const = 0;

        virtual bool operator>=(int other) const = 0;

        virtual bool operator>=(short other) const = 0;

        virtual void operator++() = 0;

        virtual void operator++(int i) = 0;

        virtual void operator--() = 0;

        virtual void operator--(int i) = 0;
    };

    class Integer : public Number
    {
        virtual Integer *operator%(Integer *other) const = 0;

        virtual Integer *operator%(long other) const = 0;

        virtual Integer *operator%(int other) const = 0;

        virtual Integer *operator%(short other) const = 0;
    };

    class Double : public Number
    {
      public:
        explicit Double(double value);

        explicit Double(const Number *value);

        double doubleValue() const override;

        float floatValue() const override;

        long longValue() const override;

        int intValue() const override;

        short shortValue() const override;

        Double *operator+(const Number *other) const override;

        Double *operator+(double other) const override;

        Double *operator+(float other) const override;

        Double *operator+(long other) const override;

        Double *operator+(int other) const override;

        Double *operator+(short other) const override;

        Double *operator-(const Number *other) const override;

        Double *operator-(double other) const override;

        Double *operator-(float other) const override;

        Double *operator-(long other) const override;

        Double *operator-(int other) const override;

        Double *operator-(short other) const override;

        Double *operator*(const Number *other) const override;

        Double *operator*(double other) const override;

        Double *operator*(float other) const override;

        Double *operator*(long other) const override;

        Double *operator*(int other) const override;

        Double *operator*(short other) const override;

        Double *operator/(const Number *other) const override;

        Double *operator/(double other) const override;

        Double *operator/(float other) const override;

        Double *operator/(long other) const override;

        Double *operator/(int other) const override;

        Double *operator/(short other) const override;

        bool operator==(const Number *other) const override;

        bool operator==(double other) const override;

        bool operator==(float other) const override;

        bool operator==(long other) const override;

        bool operator==(int other) const override;

        bool operator==(short other) const override;

        bool operator!=(const Number *other) const override;

        bool operator!=(double other) const override;

        bool operator!=(float other) const override;

        bool operator!=(long other) const override;

        bool operator!=(int other) const override;

        bool operator!=(short other) const override;

        bool operator<(const Number *other) const override;

        bool operator<(double other) const override;

        bool operator<(float other) const override;

        bool operator<(long other) const override;

        bool operator<(int other) const override;

        bool operator<(short other) const override;

        bool operator<=(const Number *other) const override;

        bool operator<=(double other) const override;

        bool operator<=(float other) const override;

        bool operator<=(long other) const override;

        bool operator<=(int other) const override;

        bool operator<=(short other) const override;

        bool operator>(const Number *other) const override;

        bool operator>(double other) const override;

        bool operator>(float other) const override;

        bool operator>(long other) const override;

        bool operator>(int other) const override;

        bool operator>(short other) const override;

        bool operator>=(const Number *other) const override;

        bool operator>=(double other) const override;

        bool operator>=(float other) const override;

        bool operator>=(long other) const override;

        bool operator>=(int other) const override;

        bool operator>=(short other) const override;

        void operator++() override;

        void operator++(int i) override;

        void operator--() override;

        void operator--(int i) override;

      private:
        double value;
    };

    class Float : public Number
    {
      public:
        explicit Float(float value);

        explicit Float(const Number *value);

        double doubleValue() const override;

        float floatValue() const override;

        long longValue() const override;

        int intValue() const override;

        short shortValue() const override;

        Number *operator+(const Number *other) const override;

        Double *operator+(double other) const override;

        Float *operator+(float other) const override;

        Float *operator+(long other) const override;

        Float *operator+(int other) const override;

        Float *operator+(short other) const override;

        Number *operator-(const Number *other) const override;

        Double *operator-(double other) const override;

        Float *operator-(float other) const override;

        Float *operator-(long other) const override;

        Float *operator-(int other) const override;

        Float *operator-(short other) const override;

        Number *operator*(const Number *other) const override;

        Double *operator*(double other) const override;

        Float *operator*(float other) const override;

        Float *operator*(long other) const override;

        Float *operator*(int other) const override;

        Float *operator*(short other) const override;

        Number *operator/(const Number *other) const override;

        Double *operator/(double other) const override;

        Float *operator/(float other) const override;

        Float *operator/(long other) const override;

        Float *operator/(int other) const override;

        Float *operator/(short other) const override;

        bool operator==(const Number *other) const override;

        bool operator==(double other) const override;

        bool operator==(float other) const override;

        bool operator==(long other) const override;

        bool operator==(int other) const override;

        bool operator==(short other) const override;

        bool operator!=(const Number *other) const override;

        bool operator!=(double other) const override;

        bool operator!=(float other) const override;

        bool operator!=(long other) const override;

        bool operator!=(int other) const override;

        bool operator!=(short other) const override;

        bool operator<(const Number *other) const override;

        bool operator<(double other) const override;

        bool operator<(float other) const override;

        bool operator<(long other) const override;

        bool operator<(int other) const override;

        bool operator<(short other) const override;

        bool operator>(const Number *other) const override;

        bool operator>(double other) const override;

        bool operator>(float other) const override;

        bool operator>(long other) const override;

        bool operator>(int other) const override;

        bool operator>(short other) const override;

        bool operator<=(const Number *other) const override;

        bool operator<=(double other) const override;

        bool operator<=(float other) const override;

        bool operator<=(long other) const override;

        bool operator<=(int other) const override;

        bool operator<=(short other) const override;

        bool operator>=(const Number *other) const override;

        bool operator>=(double other) const override;

        bool operator>=(float other) const override;

        bool operator>=(long other) const override;

        bool operator>=(int other) const override;

        bool operator>=(short other) const override;

        void operator++() override;

        void operator++(int i) override;

        void operator--() override;

        void operator--(int i) override;

      private:
        float value;
    };

    class Long : public Integer
    {
      public:
        explicit Long(long value);

        explicit Long(const Number *value);

        double doubleValue() const override;

        float floatValue() const override;

        long longValue() const override;

        int intValue() const override;

        short shortValue() const override;

        Number *operator+(const Number *other) const override;

        Double *operator+(double other) const override;

        Float *operator+(float other) const override;

        Long *operator+(long other) const override;

        Long *operator+(int other) const override;

        Long *operator+(short other) const override;

        Number *operator-(const Number *other) const override;

        Double *operator-(double other) const override;

        Float *operator-(float other) const override;

        Long *operator-(long other) const override;

        Long *operator-(int other) const override;

        Long *operator-(short other) const override;

        Number *operator*(const Number *other) const override;

        Double *operator*(double other) const override;

        Float *operator*(float other) const override;

        Long *operator*(long other) const override;

        Long *operator*(int other) const override;

        Long *operator*(short other) const override;

        Number *operator/(const Number *other) const override;

        Double *operator/(double other) const override;

        Float *operator/(float other) const override;

        Long *operator/(long other) const override;

        Long *operator/(int other) const override;

        Long *operator/(short other) const override;

        Long *operator%(Integer *other) const override;

        Long *operator%(long other) const override;

        Long *operator%(int other) const override;

        Long *operator%(short other) const override;

        bool operator==(const Number *other) const override;

        bool operator==(double other) const override;

        bool operator==(float other) const override;

        bool operator==(long other) const override;

        bool operator==(int other) const override;

        bool operator==(short other) const override;

        bool operator!=(const Number *other) const override;

        bool operator!=(double other) const override;

        bool operator!=(float other) const override;

        bool operator!=(long other) const override;

        bool operator!=(int other) const override;

        bool operator!=(short other) const override;

        bool operator<(const Number *other) const override;

        bool operator<(double other) const override;

        bool operator<(float other) const override;

        bool operator<(long other) const override;

        bool operator<(int other) const override;

        bool operator<(short other) const override;

        bool operator>(const Number *other) const override;

        bool operator>(double other) const override;

        bool operator>(float other) const override;

        bool operator>(long other) const override;

        bool operator>(int other) const override;

        bool operator>(short other) const override;

        bool operator<=(const Number *other) const override;

        bool operator<=(double other) const override;

        bool operator<=(float other) const override;

        bool operator<=(long other) const override;

        bool operator<=(int other) const override;

        bool operator<=(short other) const override;

        bool operator>=(const Number *other) const override;

        bool operator>=(double other) const override;

        bool operator>=(float other) const override;

        bool operator>=(long other) const override;

        bool operator>=(int other) const override;

        bool operator>=(short other) const override;

        void operator++() override;

        void operator++(int i) override;

        void operator--() override;

        void operator--(int i) override;

      private:
        long value;
    };

    class Int : public Integer
    {
      public:
        explicit Int(int value);

        explicit Int(const Number *value);

        double doubleValue() const override;

        float floatValue() const override;

        long longValue() const override;

        int intValue() const override;

        short shortValue() const override;

        Number *operator+(const Number *other) const override;

        Double *operator+(double other) const override;

        Float *operator+(float other) const override;

        Long *operator+(long other) const override;

        Int *operator+(int other) const override;

        Int *operator+(short other) const override;

        Number *operator-(const Number *other) const override;

        Double *operator-(double other) const override;

        Float *operator-(float other) const override;

        Long *operator-(long other) const override;

        Int *operator-(int other) const override;

        Int *operator-(short other) const override;

        Number *operator*(const Number *other) const override;

        Double *operator*(double other) const override;

        Float *operator*(float other) const override;

        Long *operator*(long other) const override;

        Int *operator*(int other) const override;

        Int *operator*(short other) const override;

        Number *operator/(const Number *other) const override;

        Double *operator/(double other) const override;

        Float *operator/(float other) const override;

        Long *operator/(long other) const override;

        Int *operator/(int other) const override;

        Int *operator/(short other) const override;

        Integer *operator%(Integer *other) const override;

        Long *operator%(long other) const override;

        Int *operator%(int other) const override;

        Int *operator%(short other) const override;

        bool operator==(const Number *other) const override;

        bool operator==(double other) const override;

        bool operator==(float other) const override;

        bool operator==(long other) const override;

        bool operator==(int other) const override;

        bool operator==(short other) const override;

        bool operator!=(const Number *other) const override;

        bool operator!=(double other) const override;

        bool operator!=(float other) const override;

        bool operator!=(long other) const override;

        bool operator!=(int other) const override;

        bool operator!=(short other) const override;

        bool operator<(const Number *other) const override;

        bool operator<(double other) const override;

        bool operator<(float other) const override;

        bool operator<(long other) const override;

        bool operator<(int other) const override;

        bool operator<(short other) const override;

        bool operator>(const Number *other) const override;

        bool operator>(double other) const override;

        bool operator>(float other) const override;

        bool operator>(long other) const override;

        bool operator>(int other) const override;

        bool operator>(short other) const override;

        bool operator<=(const Number *other) const override;

        bool operator<=(double other) const override;

        bool operator<=(float other) const override;

        bool operator<=(long other) const override;

        bool operator<=(int other) const override;

        bool operator<=(short other) const override;

        bool operator>=(const Number *other) const override;

        bool operator>=(double other) const override;

        bool operator>=(float other) const override;

        bool operator>=(long other) const override;

        bool operator>=(int other) const override;

        bool operator>=(short other) const override;

        void operator++() override;

        void operator++(int i) override;

        void operator--() override;

        void operator--(int i) override;

      private:
        int value;
    };

    class Short : public Integer
    {
      public:
        explicit Short(short value);

        explicit Short(const Number *value);

        double doubleValue() const override;

        float floatValue() const override;

        long longValue() const override;

        int intValue() const override;

        short shortValue() const override;

        Number *operator+(const Number *other) const override;

        Double *operator+(double other) const override;

        Float *operator+(float other) const override;

        Long *operator+(long other) const override;

        Int *operator+(int other) const override;

        Int *operator+(short other) const override;

        Number *operator-(const Number *other) const override;

        Double *operator-(double other) const override;

        Float *operator-(float other) const override;

        Long *operator-(long other) const override;

        Int *operator-(int other) const override;

        Int *operator-(short other) const override;

        Number *operator*(const Number *other) const override;

        Double *operator*(double other) const override;

        Float *operator*(float other) const override;

        Long *operator*(long other) const override;

        Int *operator*(int other) const override;

        Int *operator*(short other) const override;

        Number *operator/(const Number *other) const override;

        Double *operator/(double other) const override;

        Float *operator/(float other) const override;

        Long *operator/(long other) const override;

        Int *operator/(int other) const override;

        Int *operator/(short other) const override;

        Integer *operator%(Integer *other) const override;

        Long *operator%(long other) const override;

        Int *operator%(int other) const override;

        Int *operator%(short other) const override;

        bool operator==(const Number *other) const override;

        bool operator==(double other) const override;

        bool operator==(float other) const override;

        bool operator==(long other) const override;

        bool operator==(int other) const override;

        bool operator==(short other) const override;

        bool operator!=(const Number *other) const override;

        bool operator!=(double other) const override;

        bool operator!=(float other) const override;

        bool operator!=(long other) const override;

        bool operator!=(int other) const override;

        bool operator!=(short other) const override;

        bool operator<(const Number *other) const override;

        bool operator<(double other) const override;

        bool operator<(float other) const override;

        bool operator<(long other) const override;

        bool operator<(int other) const override;

        bool operator<(short other) const override;

        bool operator>(const Number *other) const override;

        bool operator>(double other) const override;

        bool operator>(float other) const override;

        bool operator>(long other) const override;

        bool operator>(int other) const override;

        bool operator>(short other) const override;

        bool operator<=(const Number *other) const override;

        bool operator<=(double other) const override;

        bool operator<=(float other) const override;

        bool operator<=(long other) const override;

        bool operator<=(int other) const override;

        bool operator<=(short other) const override;

        bool operator>=(const Number *other) const override;

        bool operator>=(double other) const override;

        bool operator>=(float other) const override;

        bool operator>=(long other) const override;

        bool operator>=(int other) const override;

        bool operator>=(short other) const override;

        void operator++() override;

        void operator++(int i) override;

        void operator--() override;

        void operator--(int i) override;

      private:
        short value;
    };

}

#endif //OBSERVABLEAPI_NUMBER_HPP

#pragma clang diagnostic pop