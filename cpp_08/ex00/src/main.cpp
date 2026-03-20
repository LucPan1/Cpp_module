#include "Easyfind.hpp"

int main()
{
    // const std::vector<int> v = {1, 2, 3};
    static const int arr[] = {1, 2, 3, 4, 5};
    // int len = 5;
    // std::deque<int> d1;
    // for (int i = 1; i < len; i++)
    //     d1.push_back(i);

    // std::vector<int> v;
    // for (int i = 1; i < len; i++)
    //     v.push_back(i);
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