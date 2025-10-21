#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>


int main(void) 
{

	std::vector<int> vector;
	vector.push_back(1);
	vector.push_back(2);
	vector.push_back(3);
	vector.push_back(4);
	vector.push_back(5);


	std::list<int> list;
	list.push_back(42);
	list.push_back(53);
	list.push_back(64);
	list.push_back(75);
	list.push_back(89);

	
	std::deque<int> deque;
	deque.push_back(42);
	deque.push_back(53);
	deque.push_back(64);
	deque.push_back(75);
	deque.push_back(89);

	std::cout << "/////////////// test vecteur ///////////////" << std::endl;

try {
	easyFind(vector, 4);
	}
catch (const std::out_of_range &e) {
	std::cerr <<  YELLOW << "Exception: " << e.what() << RESET << std::endl;
}

try {
	easyFind(vector, 25);
	}
catch (const std::out_of_range &e) {
	std::cerr <<  YELLOW << "Exception: " << e.what() << RESET << std::endl;
}


	std::cout << "/////////////// test list ///////////////" << std::endl;

try {
	easyFind(list, 89);
	}
catch (const std::out_of_range &e) {
	std::cerr <<  YELLOW << "Exception: " << e.what() << RESET << std::endl;
}


	std::cout << "/////////////// test deque ///////////////" << std::endl;


try {
	easyFind(deque, 64);
	}
catch (const std::out_of_range &e) {
	std::cerr <<  YELLOW << "Exception: " << e.what() << RESET << std::endl;
}

return 0;
}

