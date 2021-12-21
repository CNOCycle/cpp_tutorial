#include <iostream>
#include <stack>

int main()
{
    std::stack<int> s;

    s.push(100);
    std::cout << "size: " << s.size() << " ";
    std::cout << "front: " << s.top() << "\n";

    s.push(200);
    std::cout << "size: " << s.size() << " ";
    std::cout << "front: " << s.top() << "\n";

    s.push(300);
    std::cout << "size: " << s.size() << " ";
    std::cout << "front: " << s.top() << "\n";

    s.pop();
    std::cout << "size: " << s.size() << " ";
    std::cout << "front: " << s.top() << "\n";

    s.pop();
    std::cout << "size: " << s.size() << " ";
    std::cout << "front: " << s.top() << "\n";

    return 0;
}