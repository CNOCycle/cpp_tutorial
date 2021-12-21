#include <iostream>
#include <vector>
#include <stack>

typedef std::vector<std::vector<int>> AdjMap;

std::vector<int> DFS(AdjMap map)
{
    std::vector<int> order(map.size());
    std::vector<bool> visited(map.size(), false);
    std::stack<int> buf;

    // first step
    int count = 0;
    buf.push(0);
    visited[0] = true;

    while(count != map.size())
    {
        int current = buf.top();
        buf.pop();
        order[count] = current;
        count = count + 1;
        for(size_t ii = 0; ii < map.size(); ii = ii + 1)
        {
            if(map[current][ii] == 1 && visited[ii] == false)
            {
                buf.push(ii);
                visited[ii] = true;
            }
        }
    }

    for(size_t ii = 0; ii < order.size(); ii = ii + 1)
    {
        char c = 'A' + order[ii];
        std::cout << c << " ";
    }
    std::cout << "\n";

    return order;
}

int main()
{
    {
        AdjMap map = {{1, 1, 1, 0, 0},
                      {1, 1, 0, 0, 1},
                      {1, 0, 1, 0, 1},
                      {0, 0, 1, 1, 1},
                      {0, 1, 1, 1, 1}};

        std::vector<int> order = DFS(map);

    }

    {
        AdjMap map = {{1, 1, 1, 0, 0},
                      {1, 1, 0, 1, 1},
                      {1, 0, 1, 0, 1},
                      {0, 1, 0, 1, 1},
                      {0, 1, 1, 1, 1}};

        std::vector<int> order = DFS(map);

    }

    return 0;
}