#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <exception>

template <typename T>
class Span {

	public:
		Span();
		Span(unsigned int N);;
        Span(const Span& other);
        Span &operator=(const Span& other);
        ~Span();

		void	addNumber();
		void	shortestSpan();
		void	longestSpan();
	
	private:
		T *_arr;
		unsigned int _N;
};

#include "../src/Span.tpp"

#endif