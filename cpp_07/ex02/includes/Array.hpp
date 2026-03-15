#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
    
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array &operator=(const Array& other);
        ~Array();

		unsigned int size() const;

    private:
		T *_elements;
        unsigned int _size;
};

#include "Array.tpp"

#endif