#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

class ScalarConverter {

    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter &operator=(const ScalarConverter& other);
        ~ScalarConverter();

    private:
        const std::string	_name;
        int			        _grades;
};

std::ostream &operator<<(std::ostream &out, const ScalarConverter &grade);

#endif