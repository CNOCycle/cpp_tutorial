#include <iostream>

struct Complex
{
  double rel;
  double img;

};

Complex add(Complex a, Complex b)
{
    Complex c;
    c.rel = a.rel + b.rel;
    c.img = a.img + b.img;
    return c;
}

void mul(Complex& val, const double a)
{
    val.rel = a * val.rel;
    val.img = a * val.img;
}

int main()
{
    Complex a = {1.0, 2.0};
    Complex b = {3.0, 4.0};
    Complex c = add(a, b);
    std::cout << c.rel << " + " << c.img << "i\n";
    mul(c, 2.0);
    std::cout << c.rel << " + " << c.img << "i\n";
    return 0;
}