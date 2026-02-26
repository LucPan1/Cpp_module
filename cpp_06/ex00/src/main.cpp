#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    (void)av;
    if (ac > 2 || ac < 2)
    {
        std::cout << "Wrong number of arguments output" << std::endl;
        return (0);
    }
    std::cout << "hello" << std::endl;
    ScalarConverter scal;

    scal.convert(av[1]);
    return (0);
}