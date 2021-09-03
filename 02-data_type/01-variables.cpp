#include <iostream>

int main()
{
    int v1 = 42;
    std::cout << v1 << '\n';

    // Change the variable value, than read & print it.
    v1 = 69;
    std::cout << v1 << '\n';

    char v2('c');
    std::cout << v2 << '\n';

    // OK: the value of x is indeterminate
    double x;
    std::cout << x << '\n';

    return 0;
}