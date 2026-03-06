#include "ScalarConverter.hpp"

void ScalarConverter::convert(const char *literal)
{
    char *lit;
    int num;
    float deci;
    double d;
    // char *end;
    bool verif = false;

    lit = const_cast<char *>(literal);

    num = std::atoi(literal);
    deci = std::atof(literal);

    d = std::strtod(literal, NULL);
    int n = strlen(literal);
	std::string str = lit;
    for (int i = 0; i < n; i++)
    {
        if (lit[i] == '.')
        {
            std::cout << "char: " << "\'*\'" << std::endl;
            std::cout << "int: " << str.erase(i) << std::endl;
			std::string str = lit;
			if (str[n - 1] == 'f')
				std::cout << "float: " << str << std::endl;
			else
				std::cout << "float: " << str.insert(n, "f") << std::endl;
			std::string str1 = lit;
			if (str[n - 1] == 'f')
				std::cout << "double: " << str1.erase(n - 1) << std::endl;
			else
				std::cout << "double: " << str1 << std::endl;
            verif = true;
        }
    }
    if (verif == false)
    {
        if (*lit >= '0' && *lit <= '9')
            std::cout << "char: " << "Non displayable" << std::endl;
        else if (n > 1 || ((*lit < 97 || *lit > 122) && (*lit < 65 || *lit > 90)))
            std::cout << "char: impossible" << std::endl;
        else
            std::cout << "char: " << lit << std::endl;
        int i = 0;
        while (i < n)
        {
            if ((literal[i] < '0' || literal[i] > '9') && literal[0] != '-')
            {
                i--;
                std::cout << "int: impossible" << std::endl;
                break;
            }
            i++;
        }
        if (i == n)
        {
            if (num > 2147483647 || num < -2147483647)
            {
                std::cout << "int: impossible" << std::endl;
            }
            else 
                std::cout << "int: " << num << std::endl;
        }

		i = 0;
		while (i < n)
		{
			if ((literal[i] < '0' || literal[i] > '9') && literal[0] != '-')
            {
				i--;
                std::cout << "float: nanf" << std::endl;
                break;
            }
			i++;
		}
		if (i == n)
        {
			if (literal[0] == '0')
				std::cout << "float: " << str.insert(i, ".0f") << std::endl;
			else if (deci < -std::numeric_limits<float>::infinity() || deci > std::numeric_limits<float>::infinity())
				std::cout << "float: impossible" << std::endl;
			else
			{
				std::cout << "float: " << str.insert(i, ".0f") << std::endl;
			}
		}

		std::string str = lit;
		i = 0;
		while (i < n)
		{
			if ((literal[i] < '0' || literal[i] > '9') && literal[0] != '-')
            {
				i--;
                std::cout << "double: nan" << std::endl;
                break;
            }
			i++;
		}
		if (i == n)
        {
			if (literal[0] == '0')
				std::cout << "double: " << str.insert(i, ".0") << std::endl;
			else if (d < -std::numeric_limits<float>::infinity() || d > std::numeric_limits<float>::infinity())
				std::cout << "double: impossible" << std::endl;
			else
			{
				std::cout << "double: " << str.insert(i, ".0") << std::endl;
			}
		}
    }
}