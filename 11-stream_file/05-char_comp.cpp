#include <cctype>
#include "spdlog/spdlog.h"

/**
 *  > g++ -I /shared/include/ cpp_tutorial/11-stream_file/05-char_comp.cpp -L /shared/lib/ -lspdlog
**/

int main()
{

    spdlog::info("char( )=   |alpha|digit|alnum|space");
    for(int ii = 0; ii < 128; ii = ii + 1)
    {
        char c = ii;
        char p = c;
        if(c < 32 || c == 127)
        {
            p = ' ';
        }
        spdlog::info("char({})={:3d}|{:5}|{:5}|{:5}|{:5}",
                     p,
                     ii,
                     bool(isalpha(c)),
                     bool(isdigit(c)),
                     bool(isalnum(c)),
                     bool(isspace(c)));
    }

    return 0;
}