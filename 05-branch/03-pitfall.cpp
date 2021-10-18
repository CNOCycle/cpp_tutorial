#include <iostream>
#include <string>

int main()
{
    {
        int a = 20;
        if(a = 30)
        {
            std::cout << "a = 20(?)\n";
        }
        else
        {
            std::cout << "a != 20 (?)\n";
        }
        std::cout << a << "\n";
    }

    std::cout << "-----\n";
    {
        int a = 20;
        if(a == 30)
        {
            std::cout << "a = 20\n";
        }
        else
        {
            std::cout << "a != 20\n";
        }
        std::cout << a << "\n";
    }

    return 0;

}