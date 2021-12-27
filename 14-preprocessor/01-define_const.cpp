#include <iostream>
#define PI 3.14159265358979323846

/***
 *   > g++ -E cpp_tutorial/14-preprocessor/01-define_const.cpp
***/

int main()
{
    int pi_i = PI;
    double pi_d = PI;
    std::cout << PI << "\n";
    std::cout << pi_i << "\n";
    std::cout << pi_d << "\n";

    return 0;
}