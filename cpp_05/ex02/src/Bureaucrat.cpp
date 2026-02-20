#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("default"), _grades(1)
{
    std::cout << "Bureaucrat Default Constructor called" << std::endl;
    return;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade): _name(name), _grades(grade) 
{
    if (_grades < 1)
        throw GradeTooHighException();
    if (_grades > 150)
        throw GradeTooLowException();
    return;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other): _name(other._name), _grades(other._grades)
{
    if (_grades < 1)
        throw GradeTooHighException();
    if (_grades > 150)
        throw GradeTooLowException();
    // std::cout << "Bureaucrat Copy Constructor called" << std::endl;
    return;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other) {
        if (other._grades < 1)
            throw GradeTooHighException();
        if (other._grades > 150)
            throw GradeTooLowException();
        _grades = other._grades;
    }
    // std::cout << "Bureaucrat Copy Assignment Operator called" << std::endl;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    // std::cout << "Bureaucrat Destructor called" << std::endl;
    return;
}

std::string Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grades);
}

void    Bureaucrat::increment()
{
    if (_grades <= 1)
        throw GradeTooHighException();
    --_grades;
}

void    Bureaucrat::decrement()
{
    if (_grades >= 150)
        throw GradeTooLowException();
    ++_grades;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

void	Bureaucrat::signForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << _name << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &grade)
{
    out << grade.getName() << ", Bureaucrat grade " << grade.getGrade() << std::endl;
    return (out);
}