#include "Templates.hpp"
#include "iostream"
#include "string"
template<typename T>
void swap(T& a, T& b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template<typename T>
T min(T a, T b)
{
    if (a < b)
        return a;
    return b;
}

template<typename T>
T max(T a, T b)
{
    if (a > b)
        return a;
    return b;
}

// int main(void)
// {
//     int a = 5;
//     int b = 10;
//     std::cout << "a: " << a << ", b: " << b << std::endl;
//     swap(a, b);
//     std::cout << "a: " << a << ", b: " << b << std::endl;
//     std::cout << "min of a and b is " << min(a, b) << std::endl;
//     std::cout << "max of a and b is " << max(a, b) << std::endl;
//     std::string str1 = "Hello";
//     std::string str2 = "42";
//     std::cout << "str1: " << str1 << ", str2: " << str2 << std::endl;
//     swap(str1, str2);
//     std::cout << "min of str1 and str2 is " << ::min(str1, str2) << std::endl;
//     std::cout << "max of str1 and str2 is " << ::max(str1, str2) << std::endl;
//     std::cout << "str1: " << str1 << ", str2: " << str2 << std::endl;
// }

int main( void ) {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}