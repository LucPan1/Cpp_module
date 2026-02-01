#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Default Constructor called" << std::endl;
    return;
}

WrongCat::WrongCat(std::string type): WrongAnimal(type)
{
    std::cout << "WrongCat Parameterized Constructor called" << std::endl;
    return;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other)
{
    std::cout << "WrongCat Copy Constructor called" << std::endl;
    *this = other;
    return;
}

WrongCat &WrongCat::operator=(const WrongCat& other)
{
    if (this != &other) {
        WrongCat::operator=(other);
    }
    std::cout << "WrongCat Copy Assignment Operator called" << std::endl;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
    return;
}

void	WrongCat::makeSound() const
{
	std::cout << "The " << getType() << " is meowing" << std::endl;
}