#include "Array.hpp"

template <typename T>
Array<T>::Array(): _elements(NULL), _size(0)
{
    return;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    for (int i = 0; i < n; i++)
        _elements[i] = 0;
}

template <typename T>
Array<T>::Array(const Array<T> &other)
{
    *this = other;
    return;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &other)
{
    if (*this != other)
    {
        for (int i = 0; i < size(); i++)
            _elements[i] = other._elements[i];
        _size = other.size();
    }
    return (*this);
}

template <typename T>
Array<T>::~Array()
{
    delete (_elements);
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (_size);
}
