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
    season a = init(5);

    return 0;
}