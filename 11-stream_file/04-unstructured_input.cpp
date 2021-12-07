#include <iostream>
#include <string>

/***
 *  > g++ -D CIN cpp_tutorial/11-stream_file/04-unstructured_input.cpp
 *  > g++ -D PEEK cpp_tutorial/11-stream_file/04-unstructured_input.cpp
***/
int main()
{
    // input example: alice 60
    // input example: elon musk 80
    // input example: # comment

#ifdef CIN
    std::string name, grade;
    std::cout << "input: ";
    std::cin >> name >> grade;
    std::cout << "name: " << name << "\n";
    std::cout << "grade: " << std::stoi(grade) << "\n";
#endif

#ifdef PEEK
    std::string name, grade;
    std::cout << "Read Unstructured Input\n";
    std::cout << "input: ";
    while(true)
    {
        char c = std::cin.peek();
        bool cond1 = (c == '\n');
        bool cond2 = (c >= '0' && c <= '9');
        if(cond1 || cond2)
        {
            break;
        }

        if(c == '#')
        {
            int MAX_LENGTH = 80;
            std::cin.ignore(MAX_LENGTH, '\n');
            std::cout << "input:" << std::flush;
            continue;
        }

        c = std::cin.get();
        name = name + c;
    }
    std::cin >> grade;

    std::cout << "name: " << name << "\n";
    std::cout << "grade: " << std::stoi(grade) << "\n";
#endif

    return 0;
}