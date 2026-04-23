#ifndef ITER_HPP
#define ITER_HPP
#include <string>
#include <iostream>

template <typename T, typename F>
void iter(T* arr, size_t size, F function)
{
    for (size_t i = 0; i < size; i++)
        function(arr[i]);
}

template <typename T, typename F>
void iter(const T* arr, size_t size, F function)
{
    for (size_t i = 0; i < size; i++)
        function(arr[i]);
}

template<typename T>
void print(const T& value)
{
    std::cout << value << " ";
}

template <typename T>
void print_plus_one(const T& value)
{
    std::cout << value + 1 << std::endl;
}

#endif