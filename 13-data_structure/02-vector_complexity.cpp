#include <iostream>
#include <vector>
#include <chrono>
#include "util_vector.h"

int main()
{
    const int MAX = 9;
    const int MIN = 5;

    size_t length = 1000;
    std::cout << "push_back\n";
    for(int ii = MIN; ii < MAX; ii = ii + 1, length = length * 10)
    {
        std::vector<int> a(length);
        std::cout << "size: " << a.size() << "\n";
        std::cout << "capacity: " << a.capacity() << "\n";

        for(int jj = 0; jj < 2; jj = jj + 1)
        {
            std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
            push_back(a, 100);
            std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
            std::cout << "size: " << a.size() << "\n";
            std::cout << "capacity: " << a.capacity() << "\n";
            std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[µs]" << std::endl;
        }

    }
    std::cout << "------------------------\n";

    length = 1000;
    std::cout << "pop_back\n";
    for(int ii = MIN; ii < MAX; ii = ii + 1, length = length * 10)
    {
        std::vector<int> a(length);
        std::cout << "size: " << a.size() << "\n";
        std::cout << "capacity: " << a.capacity() << "\n";

        for(int jj = 0; jj < 2; jj = jj + 1)
        {
            std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
            pop_back(a);
            std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
            std::cout << "size: " << a.size() << "\n";
            std::cout << "capacity: " << a.capacity() << "\n";
            std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[µs]" << std::endl;
        }

    }
    std::cout << "------------------------\n";

    length = 1000;
    std::cout << "push_front\n";
    for(int ii = MIN; ii < MAX; ii = ii + 1, length = length * 10)
    {
        std::vector<int> a(length);
        std::cout << "size: " << a.size() << "\n";
        std::cout << "capacity: " << a.capacity() << "\n";

        for(int jj = 0; jj < 2; jj = jj + 1)
        {
            std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
            push_front(a, 100);
            std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
            std::cout << "size: " << a.size() << "\n";
            std::cout << "capacity: " << a.capacity() << "\n";
            std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[µs]" << std::endl;
        }

    }
    std::cout << "------------------------\n";

    length = 1000;
    std::cout << "pop_front\n";
    for(int ii = MIN; ii < MAX; ii = ii + 1, length = length * 10)
    {
        std::vector<int> a(length);
        std::cout << "size: " << a.size() << "\n";
        std::cout << "capacity: " << a.capacity() << "\n";

        for(int jj = 0; jj < 2; jj = jj + 1)
        {
            std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
            pop_front(a);
            std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
            std::cout << "size: " << a.size() << "\n";
            std::cout << "capacity: " << a.capacity() << "\n";
            std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[µs]" << std::endl;
        }

    }
    std::cout << "------------------------\n";

    return 0;

}