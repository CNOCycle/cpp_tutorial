#include <iostream>
#include <fstream>
#include <string>

int main()
{

    std::ifstream f;
    f.open("cpp_tutorial/11-stream_file/example3.csv");

    // move the pointer to the end of file and get the length of the file
    f.seekg(0, std::ios::end);
    long unsigned file_length = f.tellg();
    long unsigned LINE_LENG = 4;
    // missing a newline at the end of file
    long unsigned num_rows = (file_length + 1) / LINE_LENG;
    std::cout << "num_rows:" << num_rows << "\n";

    // move the opinter to the 4th row
    f.seekg(3 * LINE_LENG, std::ios::beg);

    int v;
    f >> v;
    std::cout << v << "\n";
    f.close();
    return 0;
}