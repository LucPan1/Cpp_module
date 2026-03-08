#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify(Base* p)
{
    if (p == NULL)
    {
        std::cerr << "Error: NULL pointer" << std::endl;
        return;
    }
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else 
        std::cerr << "Error: Unknown type" << std::endl;
} 

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    }
    catch(const std::exception& e)
    {
        
    }
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    }
    catch(const std::exception& e)
    {
        
    }
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    }
    catch(const std::exception& e)
    {
        
    }
    
}

// void identify(Base* p)
// {
//     Base *ptrBase = dynamic_cast<Base*>(p);
//     std::cout << ptrBase << std::endl;
// }