#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter Default Constructor called" << std::endl;
    return;
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    // std::cout << "ScalarConverter Copy Constructor called" << std::endl;
    return;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter& other)
{
    if (this != &other) {
        // _grades = other._grades;
        // return (*this);
    }
    // std::cout << "ScalarConverter Copy Assignment Operator called" << std::endl;
    return (*this);
}

ScalarConverter::~ScalarConverter()
{
    // std::cout << "ScalarConverter Destructor called" << std::endl;
    return;
}
