/**
 * ref: https://en.cppreference.com/w/cpp/language/namespace#Unnamed_namespaces
*/
# include <iostream>
namespace Q 
{
    // original-namespace-definition for V
    namespace V 
    {  
        void f();  // declaration of Q::V::f
    }

    // OK
    void V::f()
    {
        std::cout << __func__ << "\n";
    }

    // Error: g() is not yet a member of V
    //void V::g() {}
 
    // extension-namespace-definition for V
    namespace V
    {  
        // declaration of Q::V::g
        void g();
    }
}

// not an enclosing namespace for Q
namespace R 
{
    // Error: cannot define Q::V::g inside R
    //void Q::V::g() {} 
}

// OK: global namespace encloses Q
void Q::V::g()
{
    std::cout << __func__ << "\n";
}

int main()
{
    Q::V::f();
    Q::V::g();

    return 0;
}