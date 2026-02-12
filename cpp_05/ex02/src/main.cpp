#include "AForm.hpp"
#include "BureauCrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try 
    {
        BureauCrat bureau;

        if (bureau.GradeTooHighException())
            throw std::exception();
        if (bureau.GradeTooLowException())
            throw std::exception();
    }
    catch (std::exception & e)
    {
        std::cerr << "Catch error: " << e.what() << std::endl; 
    }
    return (0);
}