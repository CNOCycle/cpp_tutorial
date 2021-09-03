#include <iostream>
#include <typeinfo>

int main()
{
    std::cout << "type: "<< typeid(21 / 5).name()      << ", value=" << 21 / 5      << std::endl;
    std::cout << "type: "<< typeid(21 / 5.0).name()    << ", value=" << 21 / 5.0    << std::endl;
    std::cout << "type: "<< typeid(21.0 / 5).name()    << ", value=" << 21.0 / 5    << std::endl;
    std::cout << "type: "<< typeid(21.0 / 5.0).name()  << ", value=" << 21.0 / 5.0  << std::endl;
    std::cout << "type: "<< typeid(1 / 3 * 2.0).name() << ", value=" << 1 / 3 * 2.0 << std::endl;

    std::cout << "type: "<< typeid(double(1) / 3).name() << ", value=" << double(1) / 3 << std::endl;
    std::cout << "type: "<< typeid(static_cast<double>(1) / 3).name() << ", value=" << static_cast<double>(1) / 3 << std::endl;
    return 0;
}