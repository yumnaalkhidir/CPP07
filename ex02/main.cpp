#include <iostream>
#include "Array.hpp"
#include <string>

int main()
{
    std::cout << "---- Default Constructor ----" << std::endl;
    Array<int> empty;
    std::cout << "Size: " << empty.size() << std::endl;

    std::cout << "\n---- Sized Constructor ----" << std::endl;
    Array<int> numbers(5);
    std::cout << "Size: " << numbers.size() << std::endl;

    for (unsigned int i = 0; i < numbers.size(); i++)
        numbers[i] = i * 10;

    for (unsigned int i = 0; i < numbers.size(); i++)
        std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;

    std::cout << "\n---- Out of Bounds Test ----" << std::endl;
    try
    {
        std::cout << numbers[10] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n---- Copy Constructor ----" << std::endl;
    Array<int> copy(numbers);

    copy[0] = 999;

    std::cout << "Original[0]: " << numbers[0] << std::endl;
    std::cout << "Copy[0]: " << copy[0] << std::endl;

    std::cout << "\n---- Assignment Operator ----" << std::endl;
    Array<int> assigned;
    assigned = numbers;

    assigned[1] = 555;

    std::cout << "Original[1]: " << numbers[1] << std::endl;
    std::cout << "Assigned[1]: " << assigned[1] << std::endl;

    std::cout << "\n---- Const Object Test ----" << std::endl;
    const Array<int> constArray(numbers);
    std::cout << "constArray[2]: " << constArray[2] << std::endl;

    std::cout << "\n---- Empty Array Test ----" << std::endl;
    const Array<int> emptyArray(0);
    std::cout << "emptyArray size: " << emptyArray.size() << std::endl;
    try
    {
        emptyArray[0];
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n---- String Array Test ----" << std::endl;
    Array<std::string> words(3);

    words[0] = "Hello";
    words[1] = "42";
    words[2] = "AbuDhabi";

    for (unsigned int i = 0; i < words.size(); i++)
        std::cout << "words[" << i << "] = " << words[i] << std::endl;

    return 0;
}
