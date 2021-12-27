#include <iostream>

int main()
{
    std::cout << "[" << __TIME__ << "] ";
    std::cout << "[DEBUG] ";
    std::cout << __FILE__ << " ";
    std::cout << __LINE__ << " ";
    std::cout << "msg\n";
    return 0;
}