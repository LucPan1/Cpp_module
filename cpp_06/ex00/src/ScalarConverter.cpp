#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    // std::cout << "ScalarConverter Default Constructor called" << std::endl;
    return;
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    // std::cout << "ScalarConverter Copy Constructor called" << std::endl;
    *this = other;
    return;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter& other)
{
    (void)other;
    // std::cout << "ScalarConverter Copy Assignment Operator called" << std::endl;
    return (*this);
}

ScalarConverter::~ScalarConverter()
{
    // std::cout << "ScalarConverter Destructor called" << std::endl;
    return;
}

void ScalarConverter::convert(const std::string& literal)
{
    char *end = NULL;
    
    if (literal == "-inf" || literal == "-inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
        return;
    }

    if (literal == "+inf" || literal == "+inff" || literal == "inf" || literal == "inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
        return;
    }
    
    if (literal == "nan" || literal == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return;
    }

    // check char
    if (literal.length() == 1 && !std::isdigit(literal[0]) && std::isprint(literal[0]))
    {
        char c = literal[0];
        std::cout << "char: \'" << c << "\'" << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << std::endl;
        return;
    }

    // check int 
    long int i = std::strtol(literal.c_str(), &end, 10);
    if (*end == '\0' && (i >= INT_MIN && i <= INT_MAX))
    {
        if (i >= 0 && i <= 127)
        {
            if (std::isprint(static_cast<char>(i)))
                std::cout << "char: \'" << static_cast<char>(i) << "\'" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
        }
        else
            std::cout << "char: impossible" << std::endl;
        std::cout << "int: " << i << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
        return;
    }

    // check float
    float f = std::strtof(literal.c_str(), &end);
    if ((*end == 'f' || *end == 'F') && *(end + 1) == '\0')
    {
        std::cout << "char: ";
        if (f >= 0 && f <= 127 && f == static_cast<int>(f))
        {
            if (std::isprint(static_cast<char>(f)))
                std::cout << "\'" << static_cast<char>(f) << "\'" << std::endl;
            else
                std::cout << "Non displayable" << std::endl;
        }
        else
            std::cout << "impossible" << std::endl;
        
        std::cout << "int: ";
        if (f >= INT_MIN && f <= INT_MAX)
            std::cout << static_cast<int>(f) << std::endl;
        else
            std::cout << "impossible" << std::endl;
        
        std::cout << "float: ";
        if (f > FLT_MAX || f < -FLT_MAX)
            std::cout << "impossible" << std::endl;
        else
            std::cout << std::fixed << std::setprecision(1) << static_cast<float>(f) << "f" << std::endl;

        std::cout << "double: ";
        std::cout << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
        return;
    }

    // check double
    double d = std::strtod(literal.c_str(), &end);
    if (*end == '\0')
    {
        std::cout << "char: ";
        if (d >= 0 && d <= 127 && f == static_cast<int>(d))
        {
            if (std::isprint(static_cast<char>(d)))
                std::cout << "\'" << static_cast<char>(d) << "\'" << std::endl;
            else
                std::cout << "Non displayable" << std::endl;
        }
        else
            std::cout << "impossible" << std::endl;
        
        std::cout << "int: ";
        if (d >= INT_MIN && d <= INT_MAX)
            std::cout << static_cast<int>(d) << std::endl;
        else
            std::cout << "impossible" << std::endl;

        std::cout << "float: ";
        if (d > FLT_MAX)
            std::cout << "+inff" << std::endl;
        else if (d < -FLT_MAX)
            std::cout << "-inff" << std::endl;
        else
            std::cout << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
        
        std::cout << "double: ";
        std::cout << std::fixed << std::setprecision(1) << d << std::endl;
        return;
    }
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
}
