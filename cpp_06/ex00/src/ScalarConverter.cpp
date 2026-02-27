#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string literal)
{
    char lit;
    int num;
    float deci;
    double d;
    char *end;
    bool verif = false;

    lit = *literal.c_str();
    num = std::atoi(literal.c_str());
    deci = std::atof(literal.c_str());
    d = std::strtod(literal.c_str(), &end);
    int n = literal.length();
    for (int i = 0; i < n; i++)
    {
        if (literal[i] == '.')
        {
            std::cout << "char: " << "\'*\'" << std::endl;
            std::cout << "int: " << literal.erase(i) << std::endl;
            verif = true;
        }
    }
    if (verif == false)
    {
        if (lit >= '0' && lit <= '9')
            std::cout << "char: " << "Non displayable" << std::endl;
        else if (n > 1 || ((lit < 97 || lit > 122) && (lit < 65 || lit > 90)))
            std::cout << "char: " << "impossible" << std::endl;
        else
            std::cout << "char: " << lit << std::endl;
        if ((num < '0' || num > '9') && num != '-')
        {
            std::cout << num << std::endl;
            std::cout << "int: impossible" << std::endl;
        }
        else
            std::cout << "int: " << num << std::endl;
    }
    // else if ()

    return;
}