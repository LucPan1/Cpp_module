#include "Array.hpp"

template <typename T>
Array<T>::Array(): _elements(NULL), _size(0)
{
    return;
}

template <typename T>
Array<T>::Array(unsigned int n): _elements(new T[n]), _size(n)
{
    for (unsigned int i = 0; i < n; i++)
        _elements[i] = T();
}

template <typename T>
Array<T>::Array(const Array<T> &other): _elements(NULL), _size(other._size)
{
    _elements = new T[_size];
    for (unsigned int i = 0; i < _size; i++)
    {
        _elements[i] = other._elements[i];
    }
    return;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &other)
{
    if (this != &other)
    {
        delete[] _elements;
        _size = other.size();
        _elements = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _elements[i] = other._elements[i];
    }
    return (*this);
}

template <typename T>
Array<T>::~Array()
{
    delete (_elements);
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= size())
        throw OutOfBoundsException();
    return _elements[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (_size);
}
