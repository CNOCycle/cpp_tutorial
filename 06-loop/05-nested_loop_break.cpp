#include <iostream>

int main()
{
    bool flag_exit = false;
    int ii = 1;
    while (true)
    {

        if(flag_exit)
        {
            break;
        }

        /*inner loop statement*/
        int jj = 1;
        while (true)
        {
            if(jj >  5)
            {
                if(ii > 3)
                {
                    flag_exit = true;
                }

                break;
            }

            if(jj % 2 == 0)
            {
                jj = jj + 1;
                continue;
            }

            std::cout << ii << " * ";
            std::cout << jj << " = ";
            std::cout << ii * jj << "\n";
            jj = jj + 1;
        }

        std::cout << "exited inner loop\n";
        ii = ii + 1;
    }
    
    return 0;
}