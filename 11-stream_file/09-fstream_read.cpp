#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream f;
    f.open("cpp_tutorial/11-stream_file/example1.csv");
    while(!f.eof())
    {
        std::string line;
        std::getline(f, line);
        std::cout << line << "\n";
    }

    f.close();

    return 0;
}