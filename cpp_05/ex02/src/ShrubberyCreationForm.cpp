#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("RobotomyRequestForm", 145, 137), _target("home")
{
    std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): AForm("RobotomyRequestForm", 145, 137), _target(target)
{
    // std::cout << "ShrubberyCreationForm Parameterized Constructor called" << std::endl;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other): AForm(other), _target(other._target)
{
    // std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
    return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other) {
        AForm::operator=(other);
        _target = other._target;
    }
    // std::cout << "ShrubberyCreationForm Copy Assignment Operator called" << std::endl;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    // std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
    return;
}

std::string ShrubberyCreationForm::getTarget() const
{
    return (_target);
}

void   ShrubberyCreationForm::executeAction() const
{
	std::fstream	filein;
	std::ofstream	out_file;
	std::string		line;
	int				rows = 24;

	out_file.open((std::string(_target) + "_shrubbery").c_str(), std::ios::out);
	if (out_file.fail())
		return;
    for (int i = 0; i < rows - 1; i++)
	{
        for (int j = rows - 1; j > 1; j--)
        {
            if (i >= j)
                out_file << " *";
            else
                out_file << " ";
        }
        out_file << std::endl;
	}
	std::cout << "Successfuly created the file" << std::endl;
	out_file.close();
	filein.close();
}
