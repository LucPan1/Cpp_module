#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <array>

template <typename T>
class Easyfind {

    public:
        Easyfind();
        Easyfind(T& a, int i);
        Easyfind(const Easyfind& other);
        Easyfind &operator=(const Easyfind& other);
        ~Easyfind();
};

#include "../src/Easyfind.tpp"

#endif