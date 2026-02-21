#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), _target("robot")
{
    std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
    return;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    // std::cout << "RobotomyRequestForm Parameterized Constructor called" << std::endl;
    return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other): AForm(other), _target(other._target)
{
    // std::cout << "RobotomyRequestForm Copy Constructor called" << std::endl;
    return;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if (this != &other) {
        AForm::operator=(other);
        _target = other._target;
    }
    // std::cout << "RobotomyRequestForm Copy Assignment Operator called" << std::endl;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    // std::cout << "RobotomyRequestForm Destructor called" << std::endl;
    return;
}

std::string RobotomyRequestForm::getTarget() const
{
    return (_target);
}

void   RobotomyRequestForm::executeAction() const
{
    std::cout << "Drilling noises ... ";
    std::srand(time(0));
    if (std::rand() % 2)
        std::cout << _target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "The robotomy failed" << std::endl;
}
