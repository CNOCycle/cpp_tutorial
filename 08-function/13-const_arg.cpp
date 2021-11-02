#include <iostream>
#include <vector>

void f1(std::vector<int> a)
{
    std::cout << __func__ << "\n";
    a[0] = a[0] + 1;
    std::cout << "a[0]: " << a[0] << " ";
    std::cout << "a[1]: " << a[1] << "\n";
}

void f2(std::vector<int> &a)
{
    std::cout << __func__ << "\n";
    a[0] = a[0] + 1;
    std::cout << "a[0]: " << a[0] << " ";
    std::cout << "a[1]: " << a[1] << "\n";
}

void f3(const std::vector<int> &a)
{
    std::cout << __func__ << "\n";
    // error
    //a[0] = a[0] + 1;
}

int main()
{
    std::vector<int> b = {-5, 6};
    std::cout << "b[0]: " << b[0] << " ";
    std::cout << "b[1]: " << b[1] << "\n";

    f1(b);
    std::cout << "b[0]: " << b[0] << " ";
    std::cout << "b[1]: " << b[1] << "\n";

    f2(b);
    std::cout << "b[0]: " << b[0] << " ";
    std::cout << "b[1]: " << b[1] << "\n";

    return 0;
}