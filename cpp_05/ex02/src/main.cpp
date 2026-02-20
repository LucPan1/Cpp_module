#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try 
    {
        Bureaucrat bureau("Paul", 1);
        ShrubberyCreationForm shrub("home");
        RobotomyRequestForm robot("billy");
        PresidentialPardonForm pre("john");

        bureau.signForm(shrub);
        bureau.executeForm(shrub);
        std::cout << std::endl;
        bureau.signForm(robot);
        bureau.executeForm(robot);
        std::cout << std::endl;
        bureau.signForm(pre);
        bureau.executeForm(pre);
        std::cout << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << "Catch exception: " << e.what() << std::endl;
    }
    try
    {
        Bureaucrat steven("steven", 1);
        ShrubberyCreationForm shrub("test_target");
        steven.signForm(shrub);
        steven.executeForm(shrub);
        std::ifstream infile("test_shrub");
        infile.close();
        shrub.execute(steven);
        infile.open("test_shrub");
        infile.close();
    }
    catch(const std::exception& e)
    {
        std::cerr << "Catch exception: " << e.what() << std::endl;
    }
    return (0);
}