#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <typeinfo>
#include <climits>
#include <cfloat>
#include <iomanip>

class ScalarConverter {

    public:
        static void convert(const std::string& literal);
    
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter &operator=(const ScalarConverter& other);
        ~ScalarConverter();
};

#endif