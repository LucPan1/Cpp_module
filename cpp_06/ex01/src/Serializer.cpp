#include "Serializer.hpp"

Serializer::Serializer()
{
    // std::cout << "Serializer Default Constructor called" << std::endl;
    return;
}

Serializer::Serializer(const Serializer& other)
{
    // std::cout << "Serializer Copy Constructor called" << std::endl;
    *this = other;
    return;
}

Serializer &Serializer::operator=(const Serializer& other)
{
    (void)other;
    // std::cout << "Serializer Copy Assignment Operator called" << std::endl;
    return (*this);
}

Serializer::~Serializer()
{
    // std::cout << "Serializer Destructor called" << std::endl;
    return;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}
