#include <iostream>
#include <queue>

int main()
{
    std::queue<int> q;

    q.push(100);
    std::cout << "size: " << q.size() << " ";
    std::cout << "front: " << q.front() << " ";
    std::cout << "back: "  << q.back() << "\n";

    q.push(200);
    std::cout << "size: " << q.size() << " ";
    std::cout << "front: " << q.front() << " ";
    std::cout << "back: "  << q.back() << "\n";

    q.push(300);
    std::cout << "size: " << q.size() << " ";
    std::cout << "front: " << q.front() << " ";
    std::cout << "back: "  << q.back() << "\n";

    q.pop();
    std::cout << "size: " << q.size() << " ";
    std::cout << "front: " << q.front() << " ";
    std::cout << "back: "  << q.back() << "\n";

    q.pop();
    std::cout << "size: " << q.size() << " ";
    std::cout << "front: " << q.front() << " ";
    std::cout << "back: "  << q.back() << "\n";

    return 0;
}