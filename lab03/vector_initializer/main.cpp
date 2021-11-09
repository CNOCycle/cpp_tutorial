#include <stdlib.h>
#include <iostream>
#include <vector>
#include "initializer.h"
#include "utils.h"

int main(int argc, char *argv[])
{
    // convert char/string to int
    unsigned n = std::atoi(argv[1]);
    std::cout << "length: " << n << "\n";

    // convert char/string to floating point
    double val = std::atof(argv[2]);
    std::cout << "val: " << val << "\n";

    char int_or_double = argv[3][0];
    std::cout << "double/int[d/i]:" << int_or_double << "\n";

    if(int_or_double == 'i')
    {
        std::vector<int> vec;
        vec = const_val(vec, n, static_cast<int>(val));
        print(vec);
    }
    else if (int_or_double == 'd')
    {
        std::vector<double> vec;
        vec = const_val(vec, n, static_cast<double>(val));
        print(vec);
    }

    return 0;
}