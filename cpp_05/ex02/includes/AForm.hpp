#ifndef AFORM_HPP
# define AFORM_HPP

#include "BureauCrat.hpp"
#include <iostream>
#include <string>
#include <exception>

class AForm {

    public:
        AForm();
        AForm(const AForm& other);
        AForm &operator=(const AForm& other);
        virtual ~AForm();

		std::string	getName() const;
		bool 		getSigned() const;
		int 		getGradesSign() const;
		int 		getGradesExec() const;

		bool	GradeTooHighException();
		bool	GradeTooLowException();

		bool	beSigned(BureauCrat grade);
		bool	signAForm(BureauCrat &bureau, AForm form);

    private:
        const std::string	_name;
        bool				_is_signed;
        const int			_grades_sign;
        const int			_grades_exec;    
};

#endif