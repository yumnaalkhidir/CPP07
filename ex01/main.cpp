#include "iter.hpp"

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

    const int constArr[4] = {10, 20, 30, 40};
    iter(constArr, 4, print<int>);
    std::cout << std::endl;
}
