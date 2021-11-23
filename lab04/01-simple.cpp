#include <string>
bool identity(const bool input)
{
    return input;
}

int identity(const int input)
{
    return input;
}

std::string identity(const std::string input)
{
    return input;
}

float identity(const float a, const float b)
{
    return a + b - a;
}