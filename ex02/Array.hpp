#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <stdexcept>
#include <iostream>

template <typename T>
class Array
{
    private:
        T* data;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& copy);
        Array<T>& operator=(const Array& other);
        ~Array();
        T& operator[](unsigned int index);
        const T& operator[](unsigned int index) const;
        unsigned int size() const;
};

template <typename T>
Array<T>::Array()
{
    std::cout << "Default Constructor called" << std::endl;
    data = NULL;
    _size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    std::cout << "Parameterized Constructor called" << std::endl;
    _size = n;
    if (n == 0)
        data = NULL;
    else
        data = new T[_size];
}

template <typename T>
Array<T>::Array(const Array& copy)
{
    std::cout << "Copy Constructor called" << std::endl;
    _size = copy._size;
    if (_size == 0)
        data = NULL;
    else
    {
        data = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            data[i] = copy.data[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
    std::cout << "Copy Assognment Operator called" << std::endl;
    if (this != &other)
    {
        delete[] data;
        _size = other._size;
        if (_size == 0)
            data = NULL;
        else
        {
            data = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                data[i] = other.data[i];
        }
    }
    return (*this);
}

template <typename T>
Array<T>::~Array()
{
    std::cout << "Destructor called" << std::endl;
    delete[] data;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw std::out_of_range("Index out of bounds");
    return (data[index]);
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if (index >= _size)
        throw std::out_of_range("Index out of bounds");
    return (data[index]);
}

template <typename T>
unsigned int Array<T>::size() const
{
    return(_size);
}


#endif