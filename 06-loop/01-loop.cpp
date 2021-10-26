#include <iostream>
  
int main()
{

    {
        std::cout << "for-loop example\n";
        for(int ii = 0; ii < 3; ii = ii + 1)
        {
            std::cout << "Penny?\n";
        }
    }

    {
        std::cout << "while-loop example\n";
        int count = 0;
        while(count < 3)
        {
            std::cout << "Penny?\n";
            count = count + 1;
        }
    }

    {
        std::cout << "do-while-loop example\n";
        int count = 0;
        do
        {
            std::cout << "Penny?\n";
            count = count + 1;
        }
        while(count < 3);
    }
    // do not forget the semicolon at end of while statement

    return 0;
}

