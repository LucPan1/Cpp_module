#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type()
{
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
    return;
}

WrongAnimal::WrongAnimal(std::string type): _type(type)
{
    std::cout << "WrongAnimal Parameterized Constructor called" << std::endl;
    return;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
    *this = other;
    return;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& other)
{
    if (this != &other) {
        _type = other._type;
    }
    std::cout << "WrongAnimal Copy Assignment Operator called" << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
    return;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal sound" << std::endl;
}