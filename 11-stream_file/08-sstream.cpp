#include <cctype>
#include <iostream>
#include <string>
#include <sstream>

/**
 *  > g++ cpp_tutorial/11-stream_file/08-sstream.cpp && ./a.out
 *  Read Unstructured Input
 *  input: alice 40
 *  input: elun musk 60
 *  input: a b c d40
 *  input: # 123 456 78
 *  input:cd ef 40
 *  input: 
 *  name: alice, grade: 40
 *  name: elun_musk, grade: 60
 *  name: a_b_c_d, grade: 40
 *  name: cd_ef, grade: 40
**/

int main()
{
    std::string name, grade;
    std::stringstream normalized_string;
    std::cout << "Read Unstructured Input\n";
    std::cout << "input: ";
    while(!std::cin.eof())
    {
        char c = std::cin.peek();
        if(c == '\n')
        {
            normalized_string << name << " " << grade << "\n";
            std::cout << "input: ";
            std::cin.get();
            name = "";
            grade = "";
            continue;
        }

        if(c == '#')
        {
            int MAX_LENGTH = 80;
            std::cin.ignore(MAX_LENGTH, '\n');
            std::cout << "input:" << std::flush;
            continue;
        }
        else
        {
            if(isdigit(c))
            {
                std::cin >> grade;
            }
            else
            {
                c = std::cin.get();
                if(c == ' ')
                {
                    char next_c = std::cin.peek();
                    if(!isdigit(next_c))
                    {
                        name = name + '_';
                    }

                }
                else
                {
                    name = name + c;
                }
                
            }
        }


    }

    int grade_int;
    std::cout << "\n";
    while(normalized_string >> name >> grade_int)
    {
        std::cout << "name: " << name << ", grade: " << grade_int << "\n";
    }

    return 0;
}