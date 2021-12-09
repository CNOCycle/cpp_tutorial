#include <iostream>

typedef struct
{
  double rel;
  double img;
} MyComplex;

struct Complex
{
  double rel;
  double img;
};

int main()
{
    MyComplex a = {2.0, 3.0};
    std::cout << a.rel << " + " << a.img << "i\n";
    Complex b;
    b.rel = 4.0;
    b.img = 5.0;
    std::cout << b.rel << " + " << b.img << "i\n";
    return 0;
}