#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
  
int main()
{

    for(int ii = 0; ii < 3; ii = ii + 1)
    {
        std::cout << "Penny?\n";
    }

    int count = 0;
    while(count < 3)
    {
        std::cout << "Penny?\n";
        count = count + 1;
    }

    int count = 0;
    do
    {
        std::cout << "Penny?\n";
        count = count + 1;
    }
    while(count < 3);

    return 0;
}

