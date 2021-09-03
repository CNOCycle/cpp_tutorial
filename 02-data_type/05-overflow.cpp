#include <iostream>

int main()
{
    // 2^32 - 1 = 4294967295
    // 2^31 - 1 = 2147483647
    unsigned int a = 0;
    std::cout << a << std::endl;
    std::cout << a - 1 << std::endl;
    int b = 2147483647;
    std::cout << b << std::endl;
    std::cout << b + 1 << std::endl;
    return 0;
}