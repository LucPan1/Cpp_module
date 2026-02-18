#ifndef AAForm_HPP
# define AAForm_HPP

#include "BureauCrat.hpp"
#include <iostream>
#include <string>
#include <exception>

class BureauCrat;

class AForm {

    public:
        AForm();
        AForm(const std::string name, int gradeSign, int gradeExecute);
        AForm(const AForm& other);
        AForm &operator=(const AForm& other);
        ~AForm();

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
		bool 		getSigned() const;
		int 		getGradesSign() const;
		int 		getGradesExec() const;

		void        beSigned(const BureauCrat &grade);

    private:
        const std::string	_name;
        bool				_is_signed;
        const int			_grades_sign;
        const int			_grades_exec;    
};

std::ostream &operator<<(std::ostream &out, const AForm &AForm);

#endif