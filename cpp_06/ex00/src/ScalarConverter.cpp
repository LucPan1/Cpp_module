#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string literal)
{
    char lit;
    int num;
    float deci;
    double d;
    char *end;
    bool verif = false;

    int n = literal.length();
    for (int i = 0; i < n; i++)
    {
        if (literal[i] == 'f')
        {
            std::cout << "char: " << "\'*\'" << std::endl;
            verif = true;
        }
    }
    if (verif == false)
    {
        lit = *literal.c_str();
        num = std::atoi(literal.c_str());
        deci = std::atof(literal.c_str());
        d = std::strtod(literal.c_str(), &end);
        
        if (lit >= '0' && lit <= '9')
            std::cout << "char: " << "Non displayable" << std::endl;
        else if (n > 1 || (lit < 'a' && lit > 'z') || (lit < 'A' && lit > 'Z'))
            std::cout << "char: " << "Impossible" << std::endl;
    }
    return;
}