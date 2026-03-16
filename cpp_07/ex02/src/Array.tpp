#include "Array.hpp"

template <typename T>
Array<T>::Array(): _elements(NULL), _size(0)
{
    return;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    for (unsigned int i = 0; i < n; i++)
        _elements[i] = 0;
}

template <typename T>
Array<T>::Array(const Array<T> &other): _size(other._size)
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
Array<T> &Array<T>::operator[](int index)
{
    try
    {
        if (index > size())
            throw std::exception();
        return _elements[index];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (_size);
}
