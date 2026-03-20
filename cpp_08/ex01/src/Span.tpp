#include "Span.hpp"

template <typename T>
Span<T>::Span(): _arr(NULL), _N(200)
{
    return;
}

template <typename T>
Span<T>::Span(unsigned int N): _arr(new T[N]), _N(N)
{
    return;
}

template <typename T>
Span<T>::Span(const Span<T> &other): _arr(new T[other._N]), _N(other._N)
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
        delete[] _arr;
        _N = other._N;
        _arr = new T[_N];
        for (unsigned int i = 0; i < _N; i++)
            _arr[i] = other._arr[i];
    }
    return (*this);
}

template <typename T>
Span<T>::~Span()
{
    return;
}