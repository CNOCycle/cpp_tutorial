#include <iostream>

int main()
{

    std::cout << !0+1 << std::endl;
    std::cout << !(0+1) << std::endl;

    int a = 6 % 10 / 2 + 1 % 2 >= 3 || ! + 4 - 9 <= - 1;
    /***
     * step 1 -> int a = 6 % 10 / 2 + 1 % 2 >= 3 || ! (+4) - 9 <= (-1); (Unary plus and minus)
     * step 2 -> int a = 6 % 10 / 2 + 1 % 2 >= 3 || (0) - 9 <= (-1); (Logical NOT)
     * step 3 -> int a = (6 % 10 / 2) + (1 % 2) >= 3 || 0 - 9 <= (-1); (Arithmetic multiplication, division and remainder)
     * step 4 -> int a = (3 + 1) >= 3 || (0 - 9) <= (-1); (Arithmetic addition and substraction)
     * step 5 -> int a = (4 > 3) || (-9 <= -1); (Relational operators)
     * step 6 -> int a = (true || true); (Logical operators)
     * step 7 -> int a = true; (assignmnet operators)
    ***/
    std::cout << a << std::endl;

    return 0;

}
