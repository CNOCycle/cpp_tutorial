#include <iostream>

int main()
{
    unsigned n;
    std::cout << "The number of people: ";
    std::cin >> n;

    // get the leading one in bit representation
    unsigned pos = 0;
    while(true)
    {
        if((n >> pos) == 1)
        {
            break;
        }

        pos = pos + 1;
    }

    unsigned mask = (1 << pos);
    n = (n ^ mask) << 1;
    n = n + 1;
    std::cout << n << "\n";

    return 0;
}