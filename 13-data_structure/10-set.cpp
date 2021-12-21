#include <iostream>
#include <set>
#include <string>

typedef std::set<std::string> Set;

int main()
{
    Set m;
    m.insert("alice");
    m.insert("tom");
    m.insert("bob");
    m.insert("shirley");
    m.insert("Jennifer");
    std::cout << "size: " << m.size() << "\n";

    // Theaddition operation is undefined on Map::iterator
    for(Set::iterator it = m.begin(); it != m.end(); it++)
    {
        // the order of the insertion is not equal to the order to iteration
        std::cout << "key: " << *it << "\n";
    }
    std::cout << "-------------\n";

    // find the given key
    Set::iterator pos = m.find("shirley");
    if(pos != m.end())
    {
        std::cout << "key: " << *pos << "\n";
    }
    pos = m.find("Eren Yeager");
    if(pos == m.end())
    {
        std::cout << "not found\n";
    }
    std::cout << "-------------\n";

    // condtional erasement
    for(Set::iterator it = m.begin(); it != m.end(); /* no action */)
    {
        if(*it == "alice" || *it == "shirley")
        {
            it = m.erase(it);
        }
        else
        {
            it++;
        }
    }

    std::cout << "size: " << m.size() << "\n";
    for(Set::iterator it = m.begin(); it != m.end(); it++)
    {
        // the order of insertion is not equal to the order to iteration
        std::cout << "key: " << *it  << "\n";
    }
    std::cout << "-------------\n";

    // count
    int c = m.count("Reiner");
    std::cout << "count(reiner): " << c << "\n";
    c = m.count("bob");
    std::cout << "count(bob): " << c << "\n";

    // insert a pair twice is illegal 
    std::pair<Set::iterator, bool> attempt = m.insert("Alvin");
    std::cout << "size: " << m.size() << "\n";
    std::cout << "T/F:" << attempt.second << "\n";
    std::cout << "key: " << *attempt.first << "\n";
    attempt = m.insert("Alvin");
    std::cout << "size: " << m.size() << "\n";
    std::cout << "T/F:" << attempt.second << "\n";
    std::cout << "key: " << *attempt.first << "\n";

    return 0;
}