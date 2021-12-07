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
    std::vector<std::string> vec_filename = {"cpp_tutorial/11-stream_file/notfound.csv",
                                             "cpp_tutorial/11-stream_file/example3.csv"};

    for(size_t ii = 0; ii < vec_filename.size(); ii = ii + 1)
    {
        std::ifstream f;
        f.open(vec_filename[ii]);
        if(!f.good())
        {
            std::cout << "Cannot find file: " << vec_filename[ii] << "\n";
        }
        else
        {
            while(!f.eof())
            {
                int val;
                f >> val;
                if(f.fail())
                {
                    std::cout << "Non-integer data encountered\n";
                    f.clear();
                    std::string s;
                    f >> s;
                }
                else
                {
                    std::cout << val << "\n";
                }
            }
        }
        f.close();

    }

    return 0;
}