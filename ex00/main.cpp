#include "Templates.hpp"
#include "iostream"
#include "string"


int main(void)
{
    int a = 5;
    int b = 10;
    std::cout << "a: " << a << ", b: " << b << std::endl;
    swap(a, b);
    std::cout << "a: " << a << ", b: " << b << std::endl;
    std::cout << "min of a and b is " << ::min(a, b) << std::endl;
    std::cout << "max of a and b is " << ::max(a, b) << std::endl;
    std::string str1 = "Hello";
    std::string str2 = "42";
    std::cout << "str1: " << str1 << ", str2: " << str2 << std::endl;
    swap(str1, str2);
    std::cout << "min of str1 and str2 is " << ::min(str1, str2) << std::endl;
    std::cout << "max of str1 and str2 is " << ::max(str1, str2) << std::endl;
    std::cout << "str1: " << str1 << ", str2: " << str2 << std::endl;
}
