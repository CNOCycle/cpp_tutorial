#include <iostream>
#include <vector>

int main()
{
    // a normal 1-D vector
    std::vector<double>a = {-1, -2, -3, -4};

    // a simple 2-D vector
    std::vector<std::vector<double>> b = { {-1, -2, -3, -4},
                                           {-100, -200, -300, -400},
                                           {100, 200, 300}
                                         };

    std::vector<std::vector<double>> d;
    std::vector<std::vector<int>> c(3, std::vector<int> (4, -1));
    std::cout << "c.size() = " << c.size() << "\n";
    for(size_t ii = 0; ii < c.size(); ii = ii + 1)
    {
        std::cout << "c[" << ii << "].size() = " << c[ii].size() << "\n";
        for(size_t jj = 0; jj < c[ii].size(); jj = jj + 1)
        {
            std::cout << "c[" << ii << "] = " << c[ii][jj] << " ";
        }
        std::cout << "\n";
    }


    std::cout << "b.size() = " << b.size() << "\n";
    for(size_t ii = 0; ii < b.size(); ii = ii + 1)
    {
        std::cout << "b[" << ii << "].size() = " << b[ii].size() << "\n";
        for(size_t jj = 0; jj < b[ii].size(); jj = jj + 1)
        {
            std::cout << "b[" << ii << "] = " << b[ii][jj] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}