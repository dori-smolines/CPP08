#include "Span.hpp"
#include <iostream>
#include <list>
#include <algorithm>
int main()
{

try {
std::cout << "///////////// test 1 : creation d'un span de taille 5 //////////////" << std::endl;
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << "Shortest span : "<< sp.shortestSpan() << std::endl;
std::cout << "Longest span : "<< sp.longestSpan() << std::endl;

std::cout << "/////////////creation d'une liste longue //////////////" << std::endl;

std::list<int> list;
for (int i = 0; i < 10000; i++)
	list.push_back(i * 3);

std::cout << "///////////// creation d'un span de taille 15000 et inclusion de list //////////////" << std::endl;

Span sp2 = Span(15000);
sp2.rangeIt(list);
std::cout << "Shortest span : "<< sp2.shortestSpan() << std::endl;
std::cout << "Longest span : "<< sp2.longestSpan() << std::endl;

std::cout << "///////////// test 3 fail : inclusion de list dans le span de taille 5 //////////////" << std::endl;

sp.rangeIt(list);
std::cout << "Shortest span : "<< sp.shortestSpan() << std::endl;
std::cout << "Longest span : "<< sp.longestSpan() << std::endl;

}
	catch (const Span::ListFull &e) {
	std::cerr <<  YELLOW << "Exception: " << e.what() << RESET << std::endl;
}

try {
std::cout << "///////////// test 4 fail : span a 1 valeur //////////////" << std::endl;
Span sp3 = Span(1);
std::cout << "Shortest span : "<< sp3.shortestSpan() << std::endl;
std::cout << "Longest span : "<< sp3.longestSpan() << std::endl;
}
catch (const Span::SpanValueNb &e) {
	std::cerr <<  YELLOW << "Exception: " << e.what() << RESET << std::endl;
}


return 0;
}

