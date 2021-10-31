#include <iostream>
#include <vector>
#include <chrono>

int main()
{
    int MAX = 8;
    size_t length = 1;


    MAX = 8;
    length = 1;
    for(int ii = 0; ii < MAX; ii = ii + 1, length = length * 10)
    {
        std::vector<double> a(length);
        std::cout << "size: " << a.size() << "\n";
        std::cout << "capacity: " << a.capacity() << "\n";

        {
            std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
            a.insert(a.begin(), 1);
            std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
            std::cout << "size: " << a.size() << "\n";
            std::cout << "capacity: " << a.capacity() << "\n";
            std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[µs]" << std::endl;
        }
        {
            std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
            a.insert(a.begin(), 2);
            std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
            std::cout << "size: " << a.size() << "\n";
            std::cout << "capacity: " << a.capacity() << "\n";
            std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[µs]" << std::endl;
        }

    }

    MAX = 8;
    length = 1;
    std::cout << "------------------------\n";
    for(int ii = 0; ii < MAX; ii = ii + 1, length = length * 10)
    {
        std::vector<double> a(length);
        std::cout << "size: " << a.size() << "\n";
        std::cout << "capacity: " << a.capacity() << "\n";

        {
            std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
            a.insert(a.end(), 1);
            std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
            std::cout << "size: " << a.size() << "\n";
            std::cout << "capacity: " << a.capacity() << "\n";
            std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[µs]" << std::endl;
        }
        {
            std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
            a.insert(a.end(), 2);
            std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
            std::cout << "size: " << a.size() << "\n";
            std::cout << "capacity: " << a.capacity() << "\n";
            std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[µs]" << std::endl;
        }

    }

    return 0;

}