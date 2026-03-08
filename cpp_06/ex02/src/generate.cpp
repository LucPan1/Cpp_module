#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    int randNum = (rand() % 3) + 1;
    if (randNum == 1)
        return (new A());
    else if (randNum == 2)
        return (new B());
    else
        return (new C());
}