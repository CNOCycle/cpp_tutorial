#include <random>
#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> distrib(-10, 10);

    std::fstream f;

    int NUM_VEC = 100;
    std::vector<double> vec(NUM_VEC);
    f.open("outfile.bin", std::ios::out | std::ios::binary);
    for(size_t ii = 0; ii < NUM_VEC; ii = ii + 1)
    {
        double val = distrib(gen);
        vec[ii] = val;
        f.write(reinterpret_cast<char *>(&val), sizeof(val));
    }
    f.flush();
    f.close();
 
    f.open("outfile.bin", std::ios::in | std::ios::binary);
    for(size_t ii = 0; ii < NUM_VEC; ii = ii + 1)
    {
        double f_val;
        double v_val = vec[NUM_VEC - 1 - ii];
        f.seekg(-(ii + 1) * sizeof(double), std::ios::end);
        f.read(reinterpret_cast<char *>(&f_val), sizeof(f_val));

        if(f_val != v_val)
        {
            std::cout << "mismatch\n";
        }

    }
    f.close();

    return 0;
}