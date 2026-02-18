#include "AForm.hpp"

AForm::AForm(): _name("default"), _is_signed(false), _grades_sign(150), _grades_exec(150)
{
    std::cout << "AForm Default Constructor called" << std::endl;
    return;
}

AForm::AForm(const std::string name, int gradeSign, int gradeExecute): _name(name), _is_signed(false), _grades_sign(gradeSign), _grades_exec(gradeExecute)
{
    if (_grades_sign < 1 || _grades_exec < 1)
        throw GradeTooHighException();
    if (_grades_sign > 150 || _grades_exec > 150)
        throw GradeTooLowException();
    // std::cout << "AForm Copy Constructor called" << std::endl;
    return;
}

AForm::AForm(const AForm& other): _name(other._name), _is_signed(other._is_signed), _grades_sign(other._grades_sign), _grades_exec(other._grades_exec)
{
    // std::cout << "AForm Copy Constructor called" << std::endl;
    return;
}

AForm &AForm::operator=(const AForm& other)
{
    if (this != &other) {
        _is_signed = other._is_signed;
    }
    // std::cout << "AForm Copy Assignment Operator called" << std::endl;
    return (*this);
}

AForm::~AForm()
{
    // std::cout << "AForm Destructor called" << std::endl;
    return;
}

std::string	AForm::getName() const
{
    return (this->_name);
}

bool	AForm::getSigned() const
{
    return (this->_is_signed);
}

int		AForm::getGradesSign() const
{
    return (this->_grades_sign);
}

int		AForm::getGradesExec() const
{
    return (this->_grades_exec);
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

void	AForm::beSigned(const BureauCrat &grade)
{
	if (grade.getGrade() <= _grades_sign)
		_is_signed = true;
	else
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const AForm &AForm)
{
    out << AForm.getName() 
        << " is signed " << AForm.getSigned() 
        << ", required sign is " << AForm.getGradesSign() 
        << " and the grade execute is " << AForm.getGradesExec()
        << std::endl;
    return (out);
}