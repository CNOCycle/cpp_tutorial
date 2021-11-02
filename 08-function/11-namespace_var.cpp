/**
 * ref: https://en.cppreference.com/w/cpp/language/namespace#Unnamed_namespaces
*/
# include <iostream>

// defines ::(unique)::i
namespace 
{
    int i = 0;
}
void f()
{
    // increments ::(unique)::i
    i = i + 1;
    std::cout << i << "\n";
    std::cout << __func__ << "\n";
}

namespace A
{
    namespace
    {
        int i = 10;  // A::(unique)::i
        int j = 10;  // A::(unique)::j
    }
    void g()
    { 
        // A::(unique)::i++
        i = i + 1;
        std::cout << i << "\n";
        std::cout << __func__ << "\n";
    } 
}

int main()
{
    ::f();
    A::g();
    {
        using namespace A;
        // error: ::(unique)::i and ::A::(unique)::i are both in scope
        // i = i + 1;
        // ok, increments ::A::(unique)::i
        A::i = A::i + 1;
        std::cout << A::i << "\n";
        // ok, increments ::A::(unique)::j
        A::j = A::j + 1;
        std::cout << A::j << "\n";
    }
    i = i + 1;
    std::cout << i << "\n";

    return 0;
}