#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
  
int main()
{

    float score = 90;
    char grad;

    /* case 1 */
    if (score <= 60)
        {grad='F';}
    if (score >= 60)
        {grad='C';}
    if (score >= 70)
        {grad='B';}
    if (score >= 80)
        {grad='A';}
    std::cout << "grad: " << grad;
    std::cout << std::endl;

    /* case 2 */
    if (score >= 80)
        {grad='A';}
    if (score >= 70)
        {grad='B';}
    if (score >= 60)
        {grad='C';}
    if (score <= 60)
        {grad='F';}
    std::cout << "grad: " << grad;
    std::cout << std::endl;

    /* case 3 */
    if (score <= 60)
        {grad='F';}
    else if (score >= 60)
        {grad='C';}
    else if (score >= 70)
        {grad='B';}
    else
        {grad='A';}
    std::cout << "grad: " << grad;
    std::cout << std::endl;

    return 0;
}

