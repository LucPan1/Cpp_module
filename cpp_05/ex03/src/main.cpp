#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern intern;
    Intern someRandomIntern;
    Bureaucrat chief("chief", 1);
    AForm* rrf;
    AForm *form;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    if (rrf)
    {
        Bureaucrat sam("sam", 1);
        try 
        {
            sam.signForm(*rrf);
            sam.executeForm(*rrf);
        }
        catch (std::exception & e)
        {
            delete (rrf);
            std::cerr << "Catch exception: " << e.what() << std::endl;
        }
    }
    else
        std::cerr << "Form creation failed" << std::endl;
    delete (rrf);
    std::cout << std::endl;

    const char* forms[] = {"create shrubbery", "robotomy request", "presidential pardon"};
    const char* target[] = {"tan", "cos", "sin"};

    for (int i = 0; i < 3; i++)
    {
        form = intern.makeForm(forms[i], target[i]);
        if (form)
        {
            std::cout << "Create " << form->getName() << " for " << target[i] << std::endl;
            chief.signForm(*form);
            chief.executeForm(*form);
        }
        else
        {
            std::cerr << "Form creation failed" << std::endl;
        }
        if (i != 2)
            std::cout << std::endl;
        delete (form);
    }
    return (0);
}