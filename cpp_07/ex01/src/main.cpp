#include "Iter.hpp"

int main()
{
    std::string car[3] = {"BMW", "Ferrari", "Porsche"};
    const int array_int[] = { 1, 2, 3 };
    int arr_int[] = { 4, 5, 6 };
    float arr_float[] = { 1.2, 2.3, 3.4 };
    char ar_char[] = { 'a', 'b', 'c' };
    size_t n = 3;

    std::cout << "Test int: " << std::endl;
    iter(array_int, n, printElement<int>);
    iter(arr_int, n, increment<int>);
    iter(arr_int, n, printElement<int>);

    std::cout << std::endl;

    std::cout << "Test float: " << std::endl;
    iter(arr_float, n, increment<float>);
    iter(arr_float, n, printElement<float>);

    std::cout << std::endl;

    std::cout << "Test char: " << std::endl;
    iter(ar_char, n, increment<char>);
    iter(ar_char, n, printElement<char>);
    
    std::cout << std::endl;

    std::cout << "Test string: " << std::endl;
    iter(car, n, increment<std::string>);
    iter(car, n, printElement<std::string>);
    return (0);
}
