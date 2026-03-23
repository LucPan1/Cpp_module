#include "Span.hpp"

template <typename T>
Span<T>::Span(): _arr(NULL), _N(0)
{
    return;
}

template <typename T>
Span<T>::Span(unsigned int N): _arr(), _N(N)
{
    return;
}

template <typename T>
Span<T>::Span(const Span<T> &other): _arr(other._arr), _N(other._N)
{
    for (unsigned int i = 0; i < _N; i++)
    {
        _arr[i] = other._arr[i];
    }
    return;
}

template <typename T>
Span<T> &Span<T>::operator=(const Span<T> &other)
{
    if (this != &other)
    {
        _arr = other._arr;
        _N = other._N;
    }
    return (*this);
}

template <typename T>
Span<T>::~Span()
{
    return;
}

template <typename T>
std::vector<T>	Span<T>::addNumber(T number)
{
    if (_arr.size() >= _N)
    {
        throw FullElementsException();
    }
    _arr.push_back(number);
	return (_arr);
}