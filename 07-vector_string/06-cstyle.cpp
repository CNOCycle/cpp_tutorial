#include <iostream>
#include <string>

int main()
{
    const size_t SIZE = 5;
    double a[SIZE];
    for(size_t ii = 0; ii < SIZE; ii = ii + 1)
    {
        std::cout << "a[" << ii << "]= " << a[ii] << "\n";
    }

    int b[] = {-1, -2, -3, -4, -5};
    // b.size()(?)
    for(size_t ii = 0; ii < SIZE; ii = ii + 1)
    {
        std::cout << "b[" << ii << "]= " << b[ii] << "\n";
    }

    // do not forget the null character '\0'
    char c[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    size_t c_size = 6; //(!?)
    std::string s = "Hello";
    std::cout << "s.size() = " << s.size() << "\n";
    std::cout << "s.capacity() = " << s.capacity() << "\n";

    for(size_t ii = 0; ii < c_size; ii = ii + 1)
    {
        std::cout << "c[" << ii << "]= " << c[ii] << "\n";
    }

    // the null character signals end of string
    {
        int ii = 0;
        while(c[ii] != '\0')
        {
            std::cout << "c[" << ii << "]= " << c[ii] << "\n";
            ii = ii + 1;
        }
    }

    char d[] = "Hello";
    for(size_t ii = 0; ii < c_size; ii = ii + 1)
    {
        if(d[ii] == '\0')
        {
            std::cout << "d[" << ii << "]= " << "\\0" << "\n";
        }
        else
        {
            std::cout << "d[" << ii << "]= " << d[ii] << "\n";
        }
    }

    {
        int ii = 0;
        while(c[ii] != '\0')
        {
            std::cout << "d[" << ii << "]= " << d[ii] << "\n";
            ii = ii + 1;
        }
    }


    return 0;

}