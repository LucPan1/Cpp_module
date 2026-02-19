#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): _grades_sign(145), _grades_exec(137)
{
    std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): _grades_sign(145), _grades_exec(137)
{
    std::fstream filein;
	std::ofstream out_file;

	out_file.open((std::string(target) + "_shrubbery").c_str(), std::ios::out);
	if (out_file.fail())
		return;
    // out_file << tree.c_str() << std::endl;
    // std::cout << "ShrubberyCreationForm Parameterized Constructor called" << std::endl;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other): _grades_sign(other._grades_sign), _grades_exec(other._grades_exec)
{
    // std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
    return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other) {
        return (*this);
    }
    // std::cout << "ShrubberyCreationForm Copy Assignment Operator called" << std::endl;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
    return;
}
