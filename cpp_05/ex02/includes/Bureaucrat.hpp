#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>
#include <exception>

class Form;

class BureauCrat {

    public:
        BureauCrat();
        BureauCrat(const std::string& name, int grade);
        BureauCrat(const BureauCrat& other);
        BureauCrat &operator=(const BureauCrat& other);
        ~BureauCrat();

        class GradeTooHighException: public std::exception
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            public:
                const char* what() const throw();
        };

        std::string	getName() const;
        int			getGrade() const;

        void    increment();
        void    decrement();

   		void	signForm(Form &form);

    private:
        const std::string	_name;
        int			        _grades;
};

std::ostream &operator<<(std::ostream &out, const BureauCrat &grade);

#endif