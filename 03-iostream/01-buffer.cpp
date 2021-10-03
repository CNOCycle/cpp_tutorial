// example from: https://www.geeksforgeeks.org/buffer-flush-means-c/
#include <iostream>
#include <thread>
#include <chrono>
  
using namespace std;
  
int main()
{
    // output to the screen immediately
    for (int i = 1; i <= 5; ++i)
    {
        cout << i << " " << std::flush;
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << endl;

    // output at once
    for (int i = 1; i <= 5; ++i)
    {
        cout << i << " ";
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << endl;

    // disable buffer
    std::cout.setf(std::ios::unitbuf);
    for (int i = 1; i <= 5; ++i)
    {
        cout << i << " ";
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << endl;

    // unset buffer
    std::cout.unsetf(std::ios::unitbuf);
    for (int i = 1; i <= 5; ++i)
    {
        cout << i << " ";
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << endl;

  return 0;
}