#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): _grades_sign(72), _grades_exec(45)
{
    std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
    return;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): _grades_sign(72), _grades_exec(45)
{
    std::srand(time(0));
    if (std::rand() % 2)
        std::cout << "Drilling noises ... " << target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "The robotomy failed" << std::endl;
    // std::cout << "RobotomyRequestForm Parameterized Constructor called" << std::endl;
    return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other): _grades_sign(other._grades_sign), _grades_exec(other._grades_exec)
{
    // std::cout << "RobotomyRequestForm Copy Constructor called" << std::endl;
    return;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if (this != &other) {
        return (*this);
    }
    // std::cout << "RobotomyRequestForm Copy Assignment Operator called" << std::endl;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;
    return;
}
