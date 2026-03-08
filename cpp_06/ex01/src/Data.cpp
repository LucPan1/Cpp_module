#include "Data.hpp"

Data::Data(): _id(0), _name("default")
{
    // std::cout << "Data Default Constructor called" << std::endl;
    return;
}

Data::Data(const Data& other): _id(other._id), _name(other._name)
{
    // std::cout << "Data Copy Constructor called" << std::endl;
    *this = other;
    return;
}

Data &Data::operator=(const Data& other)
{
    if (this != &other)
    {
        _id = other._id;
        _name = other._name;
    }
    // std::cout << "Data Copy Assignment Operator called" << std::endl;
    return (*this);
}

Data::~Data()
{
    // std::cout << "Data Destructor called" << std::endl;
    return;
}
