#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"

class Intern {

    public:
        Intern();
        Intern(const Intern& other);
        Intern &operator=(const Intern& other);
        ~Intern();

        AForm *createShrubbery(const std::string &target) const;
        AForm *createRobot(const std::string &target) const;
        AForm *presidentialPardon(const std::string &target) const;

        AForm*	makeForm(const std::string &name, const std::string &target) const;
};

#endif