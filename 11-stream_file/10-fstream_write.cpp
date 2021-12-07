#include <iostream>
#include <fstream>
#include <string>
#include <vector>

/***
 *  > rm -f outfile.txt && g++ cpp_tutorial/11-stream_file/10-fstream_write.cpp && ./a.out && cat outfile.txt
 *  > rm -f outfile.txt && g++ -D APP cpp_tutorial/11-stream_file/10-fstream_write.cpp && ./a.out && cat outfile.txt
***/

int main()
{
    std::vector<std::string> vec_filename = {"cpp_tutorial/11-stream_file/example1.csv",
                                             "cpp_tutorial/11-stream_file/example2.csv"};

    std::ofstream of;
    for(size_t ii = 0; ii < vec_filename.size(); ii = ii + 1)
    {
#ifdef APP
        of.open("outfile.txt", std::ios::app);
#else
        of.open("outfile.txt", std::ios::out);
#endif

        std::ifstream f;
        f.open(vec_filename[ii]);
        while(!f.eof())
        {
            std::string line;
            std::getline(f, line);
            of << line << "\n";
        }
        f.close();

        of.close();
        
    }

    return 0;
}