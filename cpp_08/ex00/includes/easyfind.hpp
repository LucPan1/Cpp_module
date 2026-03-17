#ifndef EASYFIND_HPP
#define EASYFIND_HPP

template <typename T>
class Easyfind {

    public:
        Easyfind();
        Easyfind(unsigned int n);
        Easyfind(const Easyfind& other);
        Easyfind &operator=(const Easyfind& other);
        ~Easyfind();
};

#endif