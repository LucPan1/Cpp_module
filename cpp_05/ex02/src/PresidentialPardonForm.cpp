#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): _grades_sign(25), _grades_exec(5)
{
    std::cout << "PresidentialPardonForm Default Constructor called" << std::endl;
    return;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): _grades_sign(25), _grades_exec(5)
{
    std::cout << target << " has been pardonned by Zaphod Beeblebrox" << std::endl;
    // std::cout << "PresidentialPardonForm Parameterized Constructor called" << std::endl;
    return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other): _grades_sign(other._grades_sign), _grades_exec(other._grades_exec)
{
    // std::cout << "PresidentialPardonForm Copy Constructor called" << std::endl;
    return;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if (this != &other) {
        return (*this);
    }
    // std::cout << "PresidentialPardonForm Copy Assignment Operator called" << std::endl;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor called" << std::endl;
    return;
}

void   PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _grades_exec)
		throw GradeTooLowException();
}