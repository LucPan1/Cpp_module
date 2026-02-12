#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): _grades_sign(145), _grades_exec(137)
{
    std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
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
