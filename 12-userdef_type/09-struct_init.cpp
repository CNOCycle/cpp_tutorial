#include <iostream>

struct NotPreferred
{
    double rel = 1.0;
    double img = 2.0;
};

struct Complex
{
  double rel;
  double img;

  // declare a constructor
  Complex();
};

Complex::Complex()
{
    this->rel = 3.0;
    this->img = 4.0;
};

Complex init(double _rel = 5.0, double _img = 6.0)
{
    Complex t;
    t.rel = _rel;
    t.img = _img;
    return t;
}

int main()
{
    NotPreferred a;
    std::cout << a.rel << " + " << a.img << "i\n";
    Complex b;
    std::cout << b.rel << " + " << b.img << "i\n";
    Complex c = init();
    std::cout << c.rel << " + " << c.img << "i\n";
    return 0;
}