#include <iostream>

union reward
{
    int i_val;
    double d_val;
};

int main()
{
    reward a;
    a.i_val = 5;
    std::cout << a.i_val << "\n";
    a.d_val = 6.3;
    std::cout << a.d_val << "\n";
    std::cout << "undefined behavior when accessing the inactive member\n";
    std::cout << a.i_val << "\n";

    return 0;
}
