#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
  
int main()
{
    int a = 3;
    int b = 4;

    int ii = 1;
    int count = 0;
    while(true)
    {
        if(ii % 3 == 0 && ii % 4 == 0)
        {
            count = count + 1;
            if(count == 1)
            {
                ii = ii + 1; // do not forget this line
                continue;
            }
            else if(count == 2)
                {break;}
        }

        ii = ii + 1;
    }

    std::cout << ii << "\n";
    return 0;
}