#include <stdexcept>
#include <iostream>
#include <string>

enum season {spring = 0, summer = 1, fall = 2, winter = 3};

season init(int source)
{
    int SEASON_MAX = 3;
    if(source > SEASON_MAX || source < 0)
    {
        std::string err_msg = "received illegal value: " + std::to_string(source);
        throw std::invalid_argument(err_msg);
    }

    return static_cast<season>(source);
}

int main()
{
    try
    {
        season a = init(5);
        std::cout << "the following section will be skipped since the error occurs\n";

    }
    catch(const std::invalid_argument &e)
    {
        std::cout << e.what() << "\n";
    }

    return 0;
}