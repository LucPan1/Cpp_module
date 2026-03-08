#ifndef DATA_HPP
# define DATA_HPP

#include "Data.hpp"
#include <iostream>
#include <string>

struct Data {

    int         _id;
    std::string _name;

    Data();
    Data(const Data& other);
    Data &operator=(const Data& other);
    ~Data();
};

#endif