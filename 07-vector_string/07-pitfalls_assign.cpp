#include <iostream>
#include <string>

int main()
{
    /*
    // assign one string to another string
    char a[] = "hello";
    char b[] = "world";
    //a = b;

    // modify multiple characters
    a = "world";
    */
   std::string a = "hello";
   std::string b = "world";
   a = b;
   std::cout << "a= " << a << "\n";
   std::cout << "b= " << b << "\n";
   a = "hello";
   std::cout << "a= " << a << "\n";
   std::cout << "b= " << b << "\n";

    return 0;

}