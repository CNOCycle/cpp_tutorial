#include <iostream>
#include <vector>

bool f1(std::vector<int>& a, std::vector<int>& b)
{
    std::cout << __func__ << "\n";
    a[0] = a[0] * 2;
    a[1] = a[1] * 2;

    b[0] = b[0] + 2;
    b[1] = b[1] + 2;

    return 0;
}

int main()
{
    std::vector<int> c = {10, 20};
    std::vector<int> d = c;
    std::cout << "c[0]: " << c[0] << " ";
    std::cout << "c[1]: " << c[1] << "\n";
    std::cout << "d[0]: " << d[0] << " ";
    std::cout << "d[1]: " << d[1] << "\n";

    std::cout << f1(c, d) << "\n";
    std::cout << "c[0]: " << c[0] << " ";
    std::cout << "c[1]: " << c[1] << "\n";
    std::cout << "d[0]: " << d[0] << " ";
    std::cout << "d[1]: " << d[1] << "\n";

    return 0;
}
