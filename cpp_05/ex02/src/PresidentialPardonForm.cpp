#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), _target("david")
{
    std::cout << "PresidentialPardonForm Default Constructor called" << std::endl;
    return;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm("PresidentialPardonForm", 25, 5), _target(target)
{
    // std::cout << "PresidentialPardonForm Parameterized Constructor called" << std::endl;
    return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other): AForm(other), _target(other._target)
{
    // std::cout << "PresidentialPardonForm Copy Constructor called" << std::endl;
    return;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if (this != &other) {
        AForm::operator=(other);
        _target = other._target;
    }
    // std::cout << "PresidentialPardonForm Copy Assignment Operator called" << std::endl;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    // std::cout << "PresidentialPardonForm Destructor called" << std::endl;
    return;
}

std::string PresidentialPardonForm::getTarget() const
{
    return (_target);
}

void   PresidentialPardonForm::executeAction() const
{
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}