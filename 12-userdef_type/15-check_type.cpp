#include <iostream>
#include <type_traits>

enum Color { red, green, blue };

struct Complex
{
  double rel;
  double img;
};

union reward
{
    int i_val;
    double d_val;
};
int main()
{
    std::cout << "is_enum\n";
    std::cout << std::is_enum<Color>::value << " ";
    std::cout << std::is_enum<Complex>::value << " ";
    std::cout << std::is_enum<reward>::value << "\n";

    std::cout << "is_union\n";
    std::cout << std::is_union<Color>::value << " ";
    std::cout << std::is_union<Complex>::value << " ";
    std::cout << std::is_union<reward>::value << "\n";

    std::cout << "is_class/struct\n";
    std::cout << std::is_class<Color>::value << " ";
    std::cout << std::is_class<Complex>::value << " ";
    std::cout << std::is_class<reward>::value << "\n";    

    return 0;

};