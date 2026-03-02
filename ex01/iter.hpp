#ifndef ITER_HPP
#define ITER_HPP
#include <string>

template <typename T, typename F>
void iter(T *arr, int size, F function);

template<typename T>
void print(const T& value);

#endif