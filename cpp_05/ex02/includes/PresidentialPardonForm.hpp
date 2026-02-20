#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public AForm {

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm &operator=(const PresidentialPardonForm& other);
        ~PresidentialPardonForm();

        void    execute(Bureaucrat const & executor) const;
    
    private:
        const int   _grades_sign;
        const int   _grades_exec;
        std::string _target;
};

#endif