#pragma once
#include <string>
#include <iostream>
#include <list>
#include "Colors.hpp"

class Span {

private :
	unsigned int _n;
	std::list<int> _list;

public :
	Span();
	Span(unsigned int n);
	Span(Span const & source); // constructeur par copie
	virtual ~Span();
	Span & operator=(Span const & source); 

	void addNumber(int a);
	void multipleNumber(int a); // envoyer plusieurs nombres en un seul call
	int shortestSpan(void); 
	int longestSpan(void); 
	void rangeIt(std::list<int> fillNumber);

	class ListFull : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class SpanValueNb : public std::exception {
	public:
		virtual const char* what() const throw();
	};


};







