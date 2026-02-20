#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try 
    {
        Bureaucrat bureau;
        ShrubberyCreationForm *shrub = NULL;
        RobotomyRequestForm *robot = NULL;

        shrub = new ShrubberyCreationForm("home");

        robot = new RobotomyRequestForm("karou");

        // if (bureau.GradeTooHighException())
        //     throw std::exception();
        // if (bureau.GradeTooLowException())
        //     throw std::exception();
    }
    catch (std::exception & e)
    {
        std::cerr << "Catch error: " << e.what() << std::endl; 
    }
    return (0);
}