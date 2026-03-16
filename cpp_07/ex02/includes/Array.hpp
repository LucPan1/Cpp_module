#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>
#include <exception>

template <typename T>
class Array {
    
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array &operator=(const Array& other);
        ~Array();
        T &operator[](unsigned int index);
        const T &operator[](unsigned int index) const;

		unsigned int size() const;

        class OutOfBoundsException: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Index is out of bounds");
                }
        };

    private:
		T *_elements;
        unsigned int _size;
};

#include "../src/Array.tpp"

#endif