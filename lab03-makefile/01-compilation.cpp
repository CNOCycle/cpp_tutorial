#include "spdlog/spdlog.h"

/**
 *  # Preprocessor
 *  > g++ -E -I/shared/include/ -o 01-compilation.ii 01-compilation.cpp 
 *  # Compiler
 *  > g++ -S 01-compilation.ii
 *  # Assembler
 *  > g++ -c 01-compilation.s
 *  # Linker
 *  > g++ -L/shared/lib/ -o ./a.out 01-compilation.o -lspdlog
 *  # run
 *  > ./a.out
 *  > [2021-11-05 05:58:20.181] [info] Hello World
**/

/**
 *  For a simple project, we can combine 4 steps into a command
 *  > g++ -I/shared/include/ -L/shared/lib/ 01-compilation.cpp -lspdlog
 *  # run
 *  > ./a.out
 *  > [2021-11-05 06:07:49.683] [info] Hello World
**/

int main()
{
    spdlog::info("{} {}", "Hello", "World");
    return 0;
}