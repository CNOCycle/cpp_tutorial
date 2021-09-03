#include <iostream>

int v = 10;
int main()
{
    std::cout << "global v: " << v << std::endl;
    v = 20;
    std::cout << "global v: " << v << std::endl;
    int v = 30;
    std::cout << "local v: " << v << std::endl;
    v = 40;
    std::cout << "local v: " << v << std::endl;
    {
        std::cout << "local v: " << v << std::endl;
        int v = 50;
        std::cout << "nested v: " << v << std::endl;
        v = 60;
        std::cout << "nested v: " << v << std::endl;

    }
    std::cout << "local v: " << v << std::endl;

    return 0;
}