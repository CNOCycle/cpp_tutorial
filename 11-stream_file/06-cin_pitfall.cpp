#include <iostream>

int main()
{
    char c;
    while(true)
    {
        std::cout << "\nPlease enter [a/d]:";
        c = std::cin.get();
        if(c == '\n')
        {
            std::cout << "detect a newline remains\n";
            continue;
        }

        if(c == 'a' || c == 'd')
        {
            break;
        }
    }

    return 0;
}