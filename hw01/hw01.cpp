#include <iostream>
#include <cmath>
  
int main()
{
    float ans1 = 10000000;
    float ans2 = 0.2; // 0.5, 0.4, 0.2
    float a = 1.0;
    float b = -(ans1 + ans2);
    float c = ans1 * ans2;

    /*******************************/
    float s, x1, x2;
    s = b * b - 4 * a * c;
    s = std::sqrt(s);
    x1 = (-b + s) / (2 * a);
    x2 = (-b - s) / (2 * a);
    /*******************************/

    std::cout << "ans[#], root[#], error[%]\n";
    std::cout << ans1 << "\t" << x1 << "\t" <<  std::abs(x1 - ans1) / ans1 * 100 << std::endl;
    std::cout << ans2 << "\t" << x2 << "\t" <<  std::abs(x2 - ans2) / ans2 * 100 << std::endl;
    return 0;
}
