#include <iostream>

int main()
{

    const int a = 4;
    const int b = 5;
    static_assert(a == b, "addition failed");

    return 0;
}