#include <iostream>

union reward
{
    int i_val;
    double d_val;
};

struct MyUnion
{
    int active;
    reward u;
};

void getactive(MyUnion _u)
{
    if(_u.active == 1)
    {
        std::cout << "i\n";
    }
    else if(_u.active == 2)
    {
        std::cout << "d\n";
    }
    else
    {
        std::cout << "unknown case\n";
    }
}

int main()
{
    reward a;
    a.i_val = 5;
    MyUnion b = {1, a};
    getactive(b);

    return 0;
}
