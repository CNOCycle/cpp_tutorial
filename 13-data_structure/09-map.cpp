#include <iostream>
#include <map>
#include <string>

typedef std::map<std::string, int> Map;
typedef std::pair<std::string, int> Pair;

int main()
{
    Map m;
    m.insert(Pair("alice", 60));
    m.insert(Pair("tom", 55));
    m.insert(Pair("bob", 80));
    m.insert(Pair("shirley", 70));
    m.insert(Pair("Jennifer", 31));
    std::cout << "size: " << m.size() << "\n";

    // Theaddition operation is undefined on Map::iterator
    for(Map::iterator it = m.begin(); it != m.end(); it++)
    {
        // the order of the insertion is not equal to the order to iteration
        std::cout << "key: " << it->first << ", val:" << it->second << "\n";
    }
    std::cout << "-------------\n";

    // find the given key
    Map::iterator pos = m.find("shirley");
    if(pos != m.end())
    {
        std::cout << "key: " << pos->first << ", val:" << pos->second << "\n";
    }
    pos = m.find("Eren Yeager");
    if(pos == m.end())
    {
        std::cout << "not found\n";
    }
    std::cout << "-------------\n";

    // condtional erasement
    for(Map::iterator it = m.begin(); it != m.end(); /* no action */)
    {
        if(it->second % 2 != 0)
        {
            it = m.erase(it);
        }
        else
        {
            it++;
        }
    }

    std::cout << "size: " << m.size() << "\n";
    for(Map::iterator it = m.begin(); it != m.end(); it++)
    {
        // the order of insertion is not equal to the order to iteration
        std::cout << "key: " << it->first << ", val:" << it->second << "\n";
    }
    std::cout << "-------------\n";

    // count
    int c = m.count("Reiner");
    std::cout << "count(reiner): " << c << "\n";
    c = m.count("bob");
    std::cout << "count(bob): " << c << "\n";

    // insert a pair twice is illegal 
    std::pair<Map::iterator, bool> attempt = m.insert(Pair("Alvin", 60));
    std::cout << "size: " << m.size() << "\n";
    std::cout << "T/F:" << attempt.second << "\n";
    std::cout << "key: " << attempt.first->first << ", val:" << attempt.first->second << "\n";
    attempt = m.insert(Pair("Alvin", 60));
    std::cout << "size: " << m.size() << "\n";
    std::cout << "T/F:" << attempt.second << "\n";
    std::cout << "key: " << attempt.first->first << ", val:" << attempt.first->second << "\n";

    return 0;
}