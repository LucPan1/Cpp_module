#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string literal)
{
    char lit;
    int num;
    float deci;
    double d;
    char *end;

    lit = *literal.c_str();
    num = std::atoi(literal.c_str());
    deci = std::atof(literal.c_str());
    d = std::strtod(literal.c_str(), &end);
    if ((lit >= 'a' && lit <= 'z') || (lit >= 'A' && lit <= 'Z'))
        std::cout << "char: " << lit << std::endl;
    else if (lit >= '0' && lit <= '9')
        std::cout << "char: " << "Non displayable" << std::endl;
    else
        std::cout << "char: " << "Impossible" << std::endl;
    return;
}