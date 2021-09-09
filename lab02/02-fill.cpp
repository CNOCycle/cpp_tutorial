#include <iostream>
#include "spdlog/spdlog.h"

int main()
{
    double a = 21.456;
    double b = 13.3;
    spdlog::info("Hello, {}!", "World");
    spdlog::info("|0123456789|0123456789|0123456789|");
    spdlog::info("|{0:0>10.2f}|{1:*^10.2f}|{0:-<10.2f}|", a, b);
    return 0;
}