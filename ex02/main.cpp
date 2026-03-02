#include <iostream>
#include "Array.hpp"
#include <string>

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include "Array.hpp"

// int main()
// {
//     std::cout << "---- Default Constructor ----" << std::endl;
//     Array<int> empty;
//     std::cout << "Size: " << empty.size() << std::endl;

//     std::cout << "\n---- Sized Constructor ----" << std::endl;
//     Array<int> numbers(5);
//     std::cout << "Size: " << numbers.size() << std::endl;

//     for (unsigned int i = 0; i < numbers.size(); i++)
//         numbers[i] = i * 10;

//     for (unsigned int i = 0; i < numbers.size(); i++)
//         std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;

//     std::cout << "\n---- Out of Bounds Test ----" << std::endl;
//     try
//     {
//         std::cout << numbers[10] << std::endl;
//     }
//     catch (const std::exception& e)
//     {
//         std::cout << "Exception caught: " << e.what() << std::endl;
//     }

//     std::cout << "\n---- Copy Constructor ----" << std::endl;
//     Array<int> copy(numbers);

//     copy[0] = 999;

//     std::cout << "Original[0]: " << numbers[0] << std::endl;
//     std::cout << "Copy[0]: " << copy[0] << std::endl;

//     std::cout << "\n---- Assignment Operator ----" << std::endl;
//     Array<int> assigned;
//     assigned = numbers;

//     assigned[1] = 555;

//     std::cout << "Original[1]: " << numbers[1] << std::endl;
//     std::cout << "Assigned[1]: " << assigned[1] << std::endl;

//     std::cout << "\n---- Const Object Test ----" << std::endl;
//     const Array<int> constArray(numbers);
//     std::cout << "constArray[2]: " << constArray[2] << std::endl;

//     std::cout << "\n---- String Array Test ----" << std::endl;
//     Array<std::string> words(3);

//     words[0] = "Hello";
//     words[1] = "42";
//     words[2] = "AbuDhabi";

//     for (unsigned int i = 0; i < words.size(); i++)
//         std::cout << "words[" << i << "] = " << words[i] << std::endl;

//     return 0;
// }


int main(void)
{
    {
        Array<int> int_arr;
        std::cout << "Arr size: " << int_arr.size() << std::endl;
    }
    std::cout << "---------------------------------" <<std::endl;
    {
        const Array<int> int_arr(5);
        std::cout << "Arr size: " << int_arr.size() << std::endl;
        // int_arr[0] = 1;
        // int_arr[1] = 2;
        // int_arr[2] = 3;
        // int_arr[3] = 4;
        // int_arr[4] = 5;
        for (unsigned int i = 0; i < int_arr.size(); i++)
        {
            std::cout << int_arr[i] << " " ;
        }
        std::cout << std::endl;
    }
}