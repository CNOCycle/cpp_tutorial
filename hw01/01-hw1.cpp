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

    float err1, err2;
    err1 = std::abs( (x1 - ans1) / ans1 ) * 100;
    err2 = std::abs( (x2 - ans2) / ans2 ) * 100;

    std::cout << "ans[#], root[#], error[%]\n";
    std::cout << ans1 << "\t" << x1 << "\t" <<  err1 << std::endl;
    std::cout << ans2 << "\t" << x2 << "\t" <<  err2 << std::endl;
    return 0;
}
