#include <iostream>
#include <vector>
#include <queue>


unsigned solver_bit(const unsigned length)
{
    unsigned n = length;

    unsigned pos = 0;
    while(true)
    {
        if((n >> pos) == 1)
        {
            break;
        }

        pos = pos + 1;
    }

    unsigned mask = (1 << pos);
    n = (n ^ mask) << 1;
    n = n + 1;
    
    return n;
}

unsigned solver_vector(const unsigned length)
{
    std::vector<unsigned> v(length);
    for(size_t ii = 0; ii < v.size(); ii = ii + 1)
    {
        v[ii] = ii + 1;
    }

    while (v.size() != 1)
    {
        unsigned next_n = (v.size() + 1) / 2;
        std::vector<unsigned> buf(next_n);

        unsigned offset = 0;
        if(v.size() % 2 == 1)
        {
            offset = 1;
            buf[0] = v[v.size() - 1];
        }

        for(size_t ii = 0; ii < v.size() / 2; ii = ii + 1)
        {
            buf[ii + offset] = v[2 * ii];
        }

        v = buf;
    }
    
    return v[0];
}

unsigned solver_queue(const unsigned length)
{
    std::queue<unsigned> q;
    for(size_t ii = 0; ii < length; ii = ii + 1)
    {
        q.push(ii + 1);
    }

    while (q.size() != 1)
    {
        unsigned v = q.front();
        q.pop();
        q.pop();
        q.push(v);
    }
    
    return q.front();
}

int main()
{

    for(unsigned ii = 1; ii < 10000; ii = ii + 1)
    {
        unsigned ans_b = solver_bit(ii);
        unsigned ans_v = solver_vector(ii);
        unsigned ans_q = solver_queue(ii);
        if(ans_b != ans_v || ans_b != ans_q || ans_v != ans_q)
        {
            std::cout << "QQ\n";
            std::cout << ii << ", ";
            std::cout << ans_b << ", ";
            std::cout << ans_v << ", ";
            std::cout << ans_q << "\n";
            break;
        }
    }

    return 0;
}