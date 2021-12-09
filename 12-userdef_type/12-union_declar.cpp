#include <iostream>

union reward
{
    int i_val;
    double d_val;
};

int main()
{
    reward a;
    std::cout << "sizeof(double):" << sizeof(double) << "\n";
    std::cout << "sizeof(int):"    << sizeof(int) << "\n";
    std::cout << "sizeof(reward):" << sizeof(reward) << "\n";

    return 0;
}
