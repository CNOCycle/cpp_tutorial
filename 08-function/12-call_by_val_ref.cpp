#include <iostream>

int f1(int a)
{
    std::cout << __func__ << "\n";
    std::cout << "addr(a): " << &a << "\n";
    std::cout << "val(a): " << a << "\n";
    a = a + 1;
    std::cout << "val(a): " << a << "\n";
    return a;
}

int f2(int &a)
{
    std::cout << __func__ << "\n";
    std::cout << "addr(a): " << &a << "\n";
    std::cout << "val(a): " << a << "\n";
    a = a + 1;
    std::cout << "val(a): " << a << "\n";
    return a;
}

void sum(std::vector<int> &c, const std::vector<int> &b, const std::vector<int> &a)
{

    c[ii] = b[ii] + a[ii]
}

int main()
{
    std::cout << "call by value\n";
    int a = 1;
    int b = a;
    std::cout << "addr(a): " << &a << "\n";
    std::cout << "val(a): " << a << "\n";
    std::cout << "addr(b): " << &b << "\n";
    std::cout << "val(b): " << b << "\n";

    std::cout << "a and b are different objects\n";
    b = b + 1;
    std::cout << "val(a): " << a << "\n";
    std::cout << "val(b): " << b << "\n";

    std::cout << "call by reference\n";
    int c = 1;
    int &d = c;
    std::cout << "addr(c): " << &c << "\n";
    std::cout << "val(c): " << c << "\n";
    std::cout << "addr(d): " << &d << "\n";
    std::cout << "val(d): " << d << "\n";

    std::cout << "c and d are same object\n";
    d = d + 1;
    std::cout << "val(c): " << c << "\n";
    std::cout << "val(d): " << d << "\n";

    std::cout << "arguments are passed by value\n";
    int e = 1;
    std::cout << "addr(e): " << &e << "\n";
    int f = f1(e);
    std::cout << "e: " << e << "\n";
    std::cout << "f: " << f << "\n";

    std::cout << "arguments are passed by reference\n";
    int g = 1;
    std::cout << "addr(g): " << &g << "\n";
    int h = f2(g);
    std::cout << "g: " << g << "\n";
    std::cout << "h: " << h << "\n";

    return 0;
}