#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class BureauCrat {

    public:
        BureauCrat();
        BureauCrat(const BureauCrat& other);
        BureauCrat &operator=(const BureauCrat& other);
        ~BureauCrat();

        bool    GradeTooHighException();
        bool    GradeTooLowException();

        std::string	getName() const;
        int			getGrade() const;

        void    increment();
        void    decrement();

    private:
        const std::string	_name;
        int			        _grades;
};

std::ostream &operator<<(std::ostream &out, const BureauCrat &grade);

#endif