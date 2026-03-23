#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <exception>

template <typename T>
class Span {

	public:
		Span();
		Span(unsigned int N);
        Span(const Span& other);
        Span &operator=(const Span& other);
        ~Span();

		std::vector<T>	addNumber(T number);
		void	shortestSpan();
		void	longestSpan();

		class FullElementsException: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("The number of elements is full");
                }
        };
	
	private:
		std::vector<T> _arr;
		unsigned int _N;
};

#include "../src/Span.tpp"

#endif