#pragma once
#include <string>
#include <iostream>
#include <algorithm>
# include <stack>

#define YELLOW	"\033[33m"
#define RESET	"\033[0m"
#define BLUE	"\033[34m"

template <typename T>
class MutantStack : public std::stack<T>
{
	private :
	public :
		MutantStack();
		MutantStack(MutantStack<T> const & source);
		~MutantStack();
			MutantStack<T> & operator=(MutantStack<T> const & source);

	// definition des iterateurs

	typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	// fonction acces aux iterateurs

		iterator begin(void);
		iterator end(void);
		const_iterator cbegin(void);
		const_iterator cend(void);
		reverse_iterator rbegin(void);
		reverse_iterator rend(void);
		const_reverse_iterator crbegin(void);
		const_reverse_iterator crend(void);
};

template <typename T>
MutantStack<T>::MutantStack(void) { 
	return; 
}

template <typename T>
MutantStack<T>::~MutantStack() { 
	return; 
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const & source) {
	*this = source;
	return (*this);
}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack<T> const & source) {
	this->std::stack<T>::operator=(source);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin(void)
{
	return (this->c.cbegin());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend(void)
{
	return (this->c.cend());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin(void)
{
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend(void)
{
	return (this->c.rend());
}


template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin(void)
{
	return (this->c.crbegin());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend(void)
{
	return (this->c.crend());
}






