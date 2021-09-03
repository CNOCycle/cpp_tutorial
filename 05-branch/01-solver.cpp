#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
  
int main()
{
    // complex roots : 1,  2, 5
    // repeated roots: 1, -6, 9
    // normal case   : 1, -5, 6
    // abnormal case : 0, 5, 1
    // unstable case : 1.0, -1000.001, 1
    //std::cout << std::scientific;
    float a = 1.0;
    float b = -1000.001;
    float c = 1.0;

    if(a == 0.0)
    {
        std::cout << "liner equation\n";
        std::cout << "x: " << - c / b << "\n";
    }
    else
    {

        float s;
        s = b * b - 4 * a * c;

        if(s < 0)
        {
            s = sqrt(-s);
            float x_real, x_imag;
            x_real = -b / (2 * a);
            x_imag =  s / (2 * a);
            std::cout << "x1:" << x_real;
            std::cout << " + " << x_imag << std::endl;
            std::cout << "x2:" << x_real;
            std::cout << " - " << x_imag << std::endl;
        }
        else if (s == 0)
        {
            float x;
            x = -b / (2 * a);
            std::cout << "repeated roots\n";
            std::cout << "x: " << x << std::endl;
        }
        else
        {
            float x1, x2;
            s = sqrt(s);
            x1 = (-b + s) / (2 * a);
            x2 = (-b - s) / (2 * a);

            if (x1 > x2)
            {
                std::cout << "case for x1 > x2 \n";
                std::cout << "x1:" << x1 << std::endl;
                std::cout << "x2:" << x2 << std::endl;
            }
            else
            {
                std::cout << "case for x2 >= x1 \n";
                std::cout << "x1:" << x2 << std::endl;
                std::cout << "x2:" << x1 << std::endl;
            }

        }

    }

    return 0;
}