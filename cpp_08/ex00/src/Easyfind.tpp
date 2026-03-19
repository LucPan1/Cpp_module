#include "Easyfind.hpp"

template <typename T>
Easyfind<T>::Easyfind()
{
    return;
}

template <typename T>
Easyfind<T>::Easyfind(std::vector<T>& a, int i)
{
    try
    {
        int res = std::find(a.begin(), a.end(), i);
        if (res != a.end())
        {
            std::cout << res;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

template <typename T>
Easyfind<T>::Easyfind(const Easyfind<T> &other)
{
    *this = other;
    return;
}

template <typename T>
Easyfind<T> &Easyfind<T>::operator=(const Easyfind<T> &other)
{
    if (this != &other)
    {
        return (*this);
    }
    return (*this);
}

template <typename T>
Easyfind<T>::~Easyfind()
{
    return;
}
