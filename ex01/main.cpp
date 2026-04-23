#include "iter.hpp"
#include <iostream>

void increment(int& i)
{
    i++;
}

void add_exclamation(std::string& str)
{
    str += "!";
}

int main(void)
{
    int arr[4] = {4, 5, 6, 7};

    iter(arr, 4, print<int>);
    std::cout << std::endl;

    iter(arr, 4, increment);
    
    iter(arr, 4, print<int>);
    std::cout << std::endl;
    
    std::string array[3] = {"Hello", "42", "Abu Dhabi"};
    
    iter(array, 3, print<std::string>);
    std::cout << std::endl;
    
    iter(array, 3, add_exclamation);

    iter(array, 3, print<std::string>);
    std::cout << std::endl;

    const int arr2[4] = {4, 5, 6, 7};

    iter(arr2, 4, print<int>);
    std::cout << std::endl;

    iter(arr2, 4, print_plus_one);

    iter(arr2, 4, print<int>);
    std::cout << std::endl;
    
    const std::string array2[3] = {"Hello", "42", "Abu Dhabi"};
    
    iter(array2, 3, print<std::string>);
    std::cout << std::endl;
    
    iter(array2, 3, add_exclamation);

    iter(array2, 3, print<std::string>);
    std::cout << std::endl;
}