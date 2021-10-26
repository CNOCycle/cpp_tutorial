#include <iostream>

int main()
{
    for(int ii = 0; ii < 3; ii = ii + 1)
    {
        std::cout << "(";
        for(int jj = 0; jj < 3; jj = jj + 1)
        {
            std::cout << "knock";
            if (jj < 3 - 1)
            {
                std::cout << ", ";
            }
        }
        std::cout << ") ";

        std::cout << "Penny?\n";
    }
    return 0;
}