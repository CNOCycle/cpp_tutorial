#include <iostream>
#include <string>

int main()
{
    int month;
    std::cout << "please enter month: ";
    std::cin >> month;

    if (month == 1)
        {std::cout << "Jan\n";}
    else if (month == 2)
        {std::cout << "Feb\n";}
    else
        {std::cout << "...\n";}

    switch (month)
    {
    case 1:
        std::cout << "Jan\n";
        //break;//forget to add break statement
    case 2:
        std::cout << "Feb\n";
        break;
    
    default:
        std::cout << "...\n";
        break;
    }

    return 0;

}