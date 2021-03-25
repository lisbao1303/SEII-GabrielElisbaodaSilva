#include "complex.h"
#include <cmath>

namespace N
{

    complex::complex(double r, double i)
    {
        this->cnumber.r = r;
        this->cnumber.i = i;
    }

    complex *complex::operator+(complex x)
    {
        struct ComplexNumber number = x.getValue();
        return new complex(
            this->cnumber.r + number.r,
            this->cnumber.i + number.i);
    };

    complex *complex::operator-(complex x)
    {
        struct ComplexNumber number = x.getValue();

        return new complex(
            this->cnumber.r - number.r,
            this->cnumber.i - number.i);
    };

    complex *complex::operator*(complex x)
    {
        struct ComplexNumber number = x.getValue();

        return new complex(
            this->cnumber.r * number.r - this->cnumber.i * number.i,
            this->cnumber.r * number.i + this->cnumber.i * number.r);
    };

    complex *complex::operator/(complex x)
    {
        struct ComplexNumber number = x.getValue();

        return new complex(
            (this->cnumber.r * number.r + this->cnumber.i * number.i),
            this->cnumber.i * number.r - this->cnumber.r + number.i);
    };

    struct ComplexNumber complex::getValue()
    {
        return this->cnumber;
    };

    struct ComplexNumber complex::getPolarValue()
    {
        struct ComplexNumber Polar;
        Polar.r = sqrt(this->cnumber.r * this->cnumber.r + this->cnumber.i * this->cnumber.i);
        Polar.i = atan(this->cnumber.r / this->cnumber.i);
        return Polar;
    };

}
