#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void	increment(T& x)
{
	x += 1;
}

template <typename T>
void printElement(const T& x)
{
    std::cout << x << std::endl;
}

template <typename T, typename F>
void    iter(T *array, const size_t length, F func)
{
    for (size_t i = 0; i < length; i++) {
        func(array[i]);
    }
};

#endif