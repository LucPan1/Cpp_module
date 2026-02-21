#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
    // std::cout << "Intern Default Constructor called" << std::endl;
    return;
}

Intern::Intern(const Intern& other)
{
    *this = other;
    // std::cout << "Intern Copy Constructor called" << std::endl;
    return;
}

Intern &Intern::operator=(const Intern& other)
{
    if (this != &other) {
        return (*this);
    }
    // std::cout << "Intern Copy Assignment Operator called" << std::endl;
    return (*this);
}

Intern::~Intern()
{
    // std::cout << "Intern Destructor called" << std::endl;
    return;
}

AForm*	Intern::makeForm(const std::string &name, const std::string &target) const
{
    AForm* (Intern::*ptrToMemberFunc[])(const std::string&) const = {&Intern::createShrubbery, &Intern::createRobot, &Intern::presidentialPardon};
	std::string form[] = {"create shrubbery", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++)
	{
		if ((form[i]) == name)
		{
			AForm *form = (this->*ptrToMemberFunc[i])(target);
            std::cout << "Intern " << form->getName() << std::endl;
            return (form);
		}
	}
    return (NULL);
}

AForm *Intern::createShrubbery(const std::string &target) const
{
    return (new ShrubberyCreationForm(target));
}

AForm *Intern::createRobot(const std::string &target) const
{
    return (new RobotomyRequestForm(target));
}

AForm *Intern::presidentialPardon(const std::string &target) const
{
    return (new PresidentialPardonForm(target));
}
