#include "Easyfind.hpp"

int main()
{
    static const int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> a(arr, arr + sizeof(arr) / sizeof(int));
    try
    {
        std::vector<int>::iterator v = easyfind(a, 3);
		std::cout << *v << std::endl;
		// for (std::vector<int>::iterator it = a.begin(); it != a.end(); ++it)
		// {
		// 	std::cout << *it << std::endl;
		// }

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}