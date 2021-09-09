#include "spdlog/spdlog.h"

int main() 
{

    // spdlog level
    spdlog::trace("trace level");
    spdlog::debug("debug level");
    spdlog::info("Welcome to spdlog!");
    spdlog::warn("warn");
    spdlog::error("Some error message with arg: {}", 1);
    spdlog::critical("Some thing wrong");
    
    // Set global log level to debug
    spdlog::set_level(spdlog::level::debug);
    spdlog::trace("trace level");
    spdlog::debug("This message should be displayed..");    

    // change log pattern
    spdlog::set_pattern("%v");
    spdlog::info("Welcome to spdlog!");
    return 0;
}