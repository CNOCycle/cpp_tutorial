#include <iostream>
#include <string>

/***
 * The following two representations are valid
 * int main(int argc, char *argv[])
 * int main(int argc, char **argv)
 * 
 * > g++ cpp_tutorial/08-function/04-argc_argv.cpp
 * > ./a.out string 123 c 1 2
 * > argv[0] :./a.out 
 * > argv[1] :string
 * > argv[2] :123
 * > argv[3] :c
 * > argv[4] :1
 * > argv[5] :2
**/

int main(int argc, char *argv[])
{
    for(int ii = 0; ii < argc; ii = ii + 1)
    {
        std::string s = argv[ii];
        std::cout << "argv[" << ii << "] :"<< s << "\n";
    }

    return 0;
};