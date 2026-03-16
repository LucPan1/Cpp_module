#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template <typename T>
class Array {
    
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array &operator=(const Array& other);
        ~Array();
        Array &operator[](int index);

		unsigned int size() const;

    private:
		T *_elements;
        unsigned int _size;
};

#include "../includes/Array.hpp"

#endif