#pragma once
#include <string>
#include <iostream>
#include <algorithm>

#define YELLOW	"\033[33m"
#define RESET	"\033[0m"

template <typename T>
void easyFind(const T & container, int n) 
{
	typename T::const_iterator pos;
	pos = std::find(container.begin(), container.end(), n);
	if (pos != container.end())
		std::cout << n << " has been found" << std::endl;
	else 
		throw std::out_of_range("value was not found in container");
	return;
}




