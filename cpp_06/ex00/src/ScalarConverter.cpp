#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter Default Constructor called" << std::endl;
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
    char *end;
    // char *lit;
    // int num;
    // float deci;
    // double d;
    // bool verif = false;

    
    if (literal == "-inf" || literal == "-inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
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

    if (literal.length() == 1 && !std::isdigit(literal[0]) && std::isprint(literal[0]))
    {
        char c = literal[0];
        std::cout << "char: \'" << c << "\'" << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << std::endl;
        return;
    }

    long int i = std::strtol(literal.c_str(), &end, 10);
    if (*end == '\0' && (i >= INT_MIN && i <= INT_MAX))
    {
        if (!std::isprint(literal[0]) || std::isdigit(literal[0]))
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: \'" << static_cast<char>(i) << "\'" << std::endl;
        std::cout << "int: " << i << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
        return;
    }
    // lit = const_cast<char *>(literal.c_str());
    // num = std::atoi(literal.c_str());
    // deci = std::atof(literal.c_str());

    // d = std::strtod(literal.c_str(), NULL);
    // int n = strlen(literal.c_str());
	// std::string str = lit;
    // for (int i = 0; i < n; i++)
    // {
    //     if (lit[i] == '.')
    //     {
    //         std::cout << "char: " << "\'*\'" << std::endl;
    //         std::cout << "int: " << str.erase(i) << std::endl;
	// 		std::string str = lit;
	// 		if (str[n - 1] == 'f')
	// 			std::cout << "float: " << str << std::endl;
	// 		else
	// 			std::cout << "float: " << str.insert(n, "f") << std::endl;
	// 		std::string str1 = lit;
	// 		if (str[n - 1] == 'f')
	// 			std::cout << "double: " << str1.erase(n - 1) << std::endl;
	// 		else
	// 			std::cout << "double: " << str1 << std::endl;
    //         verif = true;
    //     }
    // }
    // if (verif == false)
    // {
    //     if (*lit >= '0' && *lit <= '9')
    //         std::cout << "char: " << "Non displayable" << std::endl;
    //     else if (n > 1 || ((*lit < 97 || *lit > 122) && (*lit < 65 || *lit > 90)))
    //         std::cout << "char: impossible" << std::endl;
    //     else
    //         std::cout << "char: " << lit << std::endl;
    //     int i = 0;
    //     while (i < n)
    //     {
    //         if ((literal[i] < '0' || literal[i] > '9') && literal[0] != '-')
    //         {
    //             i--;
    //             std::cout << "int: impossible" << std::endl;
    //             break;
    //         }
    //         i++;
    //     }
    //     if (i == n)
    //     {
    //         if (num > 2147483647 || num < -2147483647)
    //         {
    //             std::cout << "int: impossible" << std::endl;
    //         }
    //         else 
    //             std::cout << "int: " << num << std::endl;
    //     }

	// 	i = 0;
	// 	while (i < n)
	// 	{
	// 		if ((literal[i] < '0' || literal[i] > '9') && literal[0] != '-')
    //         {
	// 			i--;
    //             std::cout << "float: nanf" << std::endl;
    //             break;
    //         }
	// 		i++;
	// 	}
	// 	if (i == n)
    //     {
	// 		if (literal[0] == '0')
	// 			std::cout << "float: " << str.insert(i, ".0f") << std::endl;
	// 		else if (deci < -std::numeric_limits<float>::infinity() || deci > std::numeric_limits<float>::infinity())
	// 			std::cout << "float: impossible" << std::endl;
	// 		else
	// 		{
	// 			std::cout << "float: " << str.insert(i, ".0f") << std::endl;
	// 		}
	// 	}

	// 	std::string str = lit;
	// 	i = 0;
	// 	while (i < n)
	// 	{
	// 		if ((literal[i] < '0' || literal[i] > '9') && literal[0] != '-')
    //         {
	// 			i--;
    //             std::cout << "double: nan" << std::endl;
    //             break;
    //         }
	// 		i++;
	// 	}
	// 	if (i == n)
    //     {
	// 		if (literal[0] == '0')
	// 			std::cout << "double: " << str.insert(i, ".0") << std::endl;
	// 		else if (d < -std::numeric_limits<float>::infinity() || d > std::numeric_limits<float>::infinity())
	// 			std::cout << "double: impossible" << std::endl;
	// 		else
	// 		{
	// 			std::cout << "double: " << str.insert(i, ".0") << std::endl;
	// 		}
	// 	}
    // }
}