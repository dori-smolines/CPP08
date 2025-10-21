#include "Span.hpp"
#include <iostream>
#include <algorithm>
#include <list>
#include <limits>

////////////// CONSTRUCTOR //////////////////

Span::Span() {
	return ;
}

Span::Span(unsigned int n) : _n(n) {
	return ;
}

Span::Span(Span const & source){ // constructeur par copie
	*this = source;
	return;
}

Span::~Span()	{
	return;
}

	////////////// OPERATORS //////////////////

Span & Span::operator=(Span const & source){
	this->_n = source._n;
	this->_list = source._list;
	return (*this);
}

	////////////// MEMBER FONCTIONS ////////////////
	
	void Span::addNumber(int a) {
		if (this->_list.size() < this->_n)
			this->_list.push_back(a);
		else
			throw Span::ListFull();
	}

	int Span::longestSpan(void) {
		if (this->_list.size() < 2)
			throw Span::SpanValueNb();
		std::list<int>::iterator minIt = std::min_element(this->_list.begin(), this->_list.end());
    	std::list<int>::iterator maxIt = std::max_element(this->_list.begin(), this->_list.end());
	return (*maxIt - *minIt);
	}

	int Span::shortestSpan(void) {
		if (this->_list.size() < 2)
			throw Span::SpanValueNb();
		this->_list.sort();
		int shortest = std::numeric_limits<int>::max();
		std::list<int>::iterator prev=this->_list.begin();
		std::list<int>::iterator next = prev;
		++next;

		for (; next != this->_list.end(); ++next)
		{
			if (*next - *prev < shortest)
				shortest = *next - *prev;
			++prev;
		}
		return shortest;
	}

	void Span::rangeIt(std::list<int> fillNumber){
		if (this->_list.size() + fillNumber.size() <= this->_n)
		{
			this->_list.insert(this->_list.end(), fillNumber.begin(), fillNumber.end());
		}
		else
			throw Span::ListFull();
		return;
	}

	const char* Span::ListFull::what() const throw() {
		return "List already full";
	}

	const char* Span::SpanValueNb::what() const throw() {
		return "not enough values to calculate span";
	}
