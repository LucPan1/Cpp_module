#include "Easyfind.hpp"

int main()
{
    static const int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> a(arr, arr + sizeof(arr) / sizeof(int));
    try
    {
        easyfind(a, 3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}