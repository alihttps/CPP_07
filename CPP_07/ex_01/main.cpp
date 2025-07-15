#include "iter.hpp"

int main ()
{ 
    std::string arr = "aaaa";
    std::cout << arr + 1 << std::endl; 
    {
        char arr[] = "abcdef";
        iter(arr, 6, func);
        std::cout << arr << std::endl;
    }
    {
        int arr[] = {1, 2, 3, 4, 5, 6};
        iter(arr, 6, func);
        for(int i = 0; i < 6; i++)
            std::cout << arr[i];
        std::cout << std::endl;
    }
    {
        std::string arrs[] = {"this", "is", "also", "a" , "test", "!"};
        iter(arrs, 6, func);
        for(int i = 0; i < 6; i++)
            std::cout << arrs[i] << " ";
        std::cout << std::endl;
    }
}
