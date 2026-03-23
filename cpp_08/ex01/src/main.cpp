#include "Span.hpp"

int main()
{
    try
    {
        Span<unsigned int> span(3);
        std::vector<unsigned int> v1;
        std::vector<unsigned int>::const_iterator it;
    
        span.addNumber(848);
        span.addNumber(0);
        span.addNumber(56);
        v1 = span.addNumber(253);
        for (it = v1.begin(); it != v1.end(); ++it)
            std::cout << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return (0);
}