#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename T>
class Array
{
    private:
        T *t_array;
        unsigned int _len;
    public:
    Array() : t_array(new T[0]) , _len(0)
    {
        
    }
    Array(unsigned int len) : t_array(new T[len]) , _len(len)
    {

    }
    Array(const Array& orig)
    {
        t_array = new T[orig._len];
        _len = orig._len;
        for (size_t i = 0; i < _len ; i++)
        {
            t_array[i] = orig.t_array[i];
        }
    }
    Array<T>& operator=(const Array& orig)
    {
        if (this != orig)
            delete[] t_array;
        t_array = new T[orig._len];
        _len = orig._len;
        for (size_t i = 0; i < _len ; i++)
        {
            t_array[i] = orig.t_array[i];
        }
    }
    T& operator[](unsigned int index)
    {
        if (index > _len)
            throw std::exception();
        return t_array[index];
    }
    unsigned int size() const
    {
        return _len;
    }
    T& get_elem(unsigned int i) const
    {
        return t_array[i];
    }
    ~Array()
    {
        delete[] t_array;
    }
};

template <typename T>
std::ostream &operator<<(std::ostream &os, const Array<T> &a)
{
    for (size_t i = 0; i < a.size(); ++i)
    {
        os << a.get_elem(i);
    }

    return os;
}


#endif