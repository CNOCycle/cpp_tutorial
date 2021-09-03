#include <iostream>

int main()
{

    // bool to int
    int a = bool(false);
    int b = bool(true);
    std::cout << "false: " << a << std::endl;
    std::cout << "true:  " << b << std::endl;

    // int to bool
    bool c = int(-1);
    bool d = int(+1);
    bool e = int(-0);
    bool f = int(+0);
    std::cout << "-1: " << std::boolalpha << c << std::endl;
    std::cout << "+1: " << std::boolalpha << d << std::endl;
    std::cout << "-0: " << std::boolalpha << e << std::endl;
    std::cout << "+0: " << std::boolalpha << f << std::endl;

    return 0;

}
