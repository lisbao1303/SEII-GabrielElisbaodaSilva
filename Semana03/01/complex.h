//complex.h
namespace N
{
    struct ComplexNumber
    {
        double r;
        double i;
    };
    class complex
    {
    public:
        struct ComplexNumber cnumber;
        complex(double a, double b);
        complex *operator+(complex by);
        complex *operator-(complex by);
        complex *operator*(complex by);
        complex *operator/(complex by);
        struct ComplexNumber getValue();
        struct ComplexNumber getPolarValue();
    };
}