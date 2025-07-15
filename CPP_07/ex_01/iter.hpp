#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>

std::string operator+(std::string str, int i)
{
    std::string s(1, '0' + i);
    return str + s;
}

template <typename T>
void func(T &a)
{
    a = a + 1;
}

template <typename T>
void iter(T *arr, int len , void (*f)(T&))
{
    for(int i = 0; i < len; i++)
        f(arr[i]);
}

#endif