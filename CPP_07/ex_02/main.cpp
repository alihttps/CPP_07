#include "Array.hpp"
#include <time.h>
#include <stdlib.h>

#define MAX_VAL 5
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    std::cout <<"mirror 0 :" << mirror[0] << std::endl;
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
        std::cout << "numbers " << numbers[i];
        std::cout << std::endl;
        std::cout << "mirror " << mirror[i];
        std::cout << std::endl;
    }
    {
        Array<char> array(10);
        char arr[] = "abcdef";
        for (size_t i = 0; i < 7; i++)
            array[i] = arr[i];
        std::cout << array << std::endl;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    delete [] mirror;
    return 0;
}