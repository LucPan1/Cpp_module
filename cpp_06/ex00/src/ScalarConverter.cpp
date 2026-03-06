#include "ScalarConverter.hpp"

void ScalarConverter::convert(const char *literal)
{
    char *lit;
    int num;
    float deci;
    // double d;
    // char *end;
    bool verif = false;
    // bool check = false;

    lit = const_cast<char *>(literal);

    num = std::atoi(literal);
    deci = std::atof(literal);
    // d = std::strtod(literal.c_str(), &end);
    int n = strlen(literal);
	std::string str = lit;
    for (int i = 0; i < n; i++)
    {
        if (lit[i] == '.')
        {
            std::cout << "char: " << "\'*\'" << std::endl;
            std::cout << "int: " << str.erase(i) << std::endl;
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

		if (deci >= '0' && deci <= '9')
		{
			std::cout << "float: " << deci << std::endl; 

			for (int i = 0; i < n; i++)
			{
				if (i == n - 1)
					std::cout << "float: " << str.insert(i + 1, ".0f") << std::endl;
			}
			std::cout << "hello" << std::endl;
		}
		else
			std::cout << "float: nanf" << std::endl; 

    }
        
        

    // return;
}