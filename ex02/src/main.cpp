#include "MutantStack.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>


int main()
{
    std::cout << YELLOW << "★----------------------☆ TEST MUTANTSTACK ☆--------------------------★" << RESET << std::endl;

	MutantStack<int> mutant;

    mutant.push(5);
    mutant.push(737);
    mutant.push(54380);
    mutant.push(2147483647);
    mutant.push(17);
    mutant.push(7000);
    mutant.push(7000);
    mutant.push(-25);
    mutant.push(375);
    mutant.push(2);
    mutant.push(567981);
    mutant.push(0);
    mutant.push(89);

    std::cout << "stack size : "<< mutant.size() << std::endl;
    std::cout << "value on top : "<< mutant.top() << std::endl;

    mutant.pop();
    std::cout << "removing the top element... new value on top : "<< mutant.top() << std::endl;

    std::cout << "new stack size : "<< mutant.size() << std::endl;

	std::cout << "iterator : "<< std::endl;

    MutantStack<int>::iterator it = mutant.begin();
    MutantStack<int>::iterator itend = mutant.end();

    ++it;
    --it;
    while (it != itend)
    {
        std::cout << "    " <<  *it << std::endl;
        ++it;
    }

  std::cout << "Reverse iterator" << std::endl;

    MutantStack<int>::reverse_iterator rit = mutant.rbegin();
    MutantStack<int>::reverse_iterator rite = mutant.rend();

    ++rit;
    --rit;

    while (rit != rite)
    {
    std::cout << "   " << *rit << std::endl;
    ++rit;
    }


	std::stack<int> s(mutant);

    std::cout << YELLOW  << "\n★----------------------☆ TEST STD::LIST ☆--------------------------★" << RESET << std::endl;

    std::list<int> listmutant;

	listmutant.push_back(5);
	listmutant.push_back(737);
	listmutant.push_back(54380);
    listmutant.push_back(2147483647);
	listmutant.push_back(17);
	listmutant.push_back(7000);
	listmutant.push_back(7000);
	listmutant.push_back(-25);
	listmutant.push_back(375);
	listmutant.push_back(2);
	listmutant.push_back(567981);
	listmutant.push_back(0);
	listmutant.push_back(89);

    std::cout << "Last element of the list: "<<listmutant.back() << std::endl;
    std::cout << "List size: " << listmutant.size() << std::endl;

    listmutant.pop_back();
    std::cout << "Removing last element of the list... new last element: "<<listmutant.back() << std::endl;

    std::cout << "new List size: " << listmutant.size() << std::endl;

	std::cout << "iterator : "<< std::endl;

    std::list<int>::iterator iter = listmutant.begin();
    std::list<int>::iterator itera = listmutant.end();

    while (iter != itera) {
        std::cout << "    " << *iter << std::endl;
        ++iter;
    }

 
    std::cout << "Reverse iterator " << std::endl ;

    std::list<int>::reverse_iterator ritl = listmutant.rbegin();
    std::list<int>::reverse_iterator ritel = listmutant.rend();

    ++ritl;
    --ritl;

    while (ritl != ritel)
    {
    std::cout << "   " << *ritl << std::endl;
    ++ritl;
    }


	return 0;
}
