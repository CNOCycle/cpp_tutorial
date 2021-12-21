#include <iostream>
#include <stack>
#include <chrono>

std::stack<int> init(const int length)
{
    std::stack<int> s;
    for(int ii = 0; ii < length; ii = ii + 1)
    {
        s.push(ii);
    }

    return s;
}

int main()
{
    const int MAX = 9;
    const int MIN = 5;

    size_t length = 1000;
    std::cout << "push\n";
    for(int ii = MIN; ii < MAX; ii = ii + 1, length = length * 10)
    {
        std::stack<int> a = init(length);
        std::cout << "size: " << a.size() << "\n";

        for(int jj = 0; jj < 2; jj = jj + 1)
        {
            std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
            a.push(100);
            std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
            std::cout << "size: " << a.size() << "\n";
            std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[µs]" << std::endl;
        }

    }
    std::cout << "------------------------\n";

    length = 1000;
    std::cout << "pop\n";
    for(int ii = MIN; ii < MAX; ii = ii + 1, length = length * 10)
    {
        std::stack<int> a = init(length);
        std::cout << "size: " << a.size() << "\n";

        for(int jj = 0; jj < 2; jj = jj + 1)
        {
            std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
            a.pop();
            std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
            std::cout << "size: " << a.size() << "\n";
            std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[µs]" << std::endl;
        }

    }
    std::cout << "------------------------\n";

    return 0;
}