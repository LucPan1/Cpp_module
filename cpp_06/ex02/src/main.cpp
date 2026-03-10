#include "Base.hpp"
#include "identify.hpp"
#include "generate.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    srand(time(NULL));

    for (int i = 0; i < 3; i++)
    {
        Base *base = generate();

        std::cout << "Pointer: ";
        identify(base);

        std::cout << "Reference: ";
        identify(*base);

        delete (base);
    }
}
