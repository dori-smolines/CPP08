*This project has been created as part of the 42 curriculum by smolines.*

# CPP Module 08

## Description

This repository contains the exercises of **Module 08** of the C++ curriculum at 42. Building on Module 07, this module marks the introduction of the **STL** — Standard Template Library — with its **Containers**, **iterators**, and **Algorithms**.

Unlike previous modules, using the STL isn't just allowed here — it's **the actual goal**: exercises could technically be solved without it, but doing so intentionally misses the point of the module and is graded accordingly.

### Exercise 00 — Easy find

A function template `easyfind(container, value)`:
- Assumes `T` is a container **of integers**, and finds the first occurrence of the given integer inside it.
- Returns an error value (or throws an exception) if no occurrence is found.
- Associative containers don't need to be handled.

### Exercise 01 — Span

A `Span` class that can store up to `N` integers (`N` passed to the constructor):
- `addNumber()` adds a single number; adding beyond `N` elements throws an exception.
- `shortestSpan()` / `longestSpan()` find the smallest / largest distance between any two stored numbers, throwing an exception if fewer than two numbers are stored.
- Also supports filling the `Span` from a **range of iterators** in a single call, instead of calling `addNumber()` thousands of times.
- Tested with at least 10,000 numbers to validate performance and correctness at scale.

```cpp
Span sp = Span(5);
sp.addNumber(6); sp.addNumber(3); sp.addNumber(17);
sp.addNumber(9); sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl; // 2
std::cout << sp.longestSpan()  << std::endl; // 14
```

### Exercise 02 — Mutated abomination

`std::stack` is one of the only STL Containers that isn't iterable. This exercise fixes that:
- A `MutantStack` class template, implemented **in terms of** `std::stack`.
- Offers every member function of `std::stack`, plus **iterators** (`begin()` / `end()`), making it fully iterable.
- Verified by running the same test sequence against `MutantStack` and against another container (e.g. `std::list`), and checking that both produce identical output.

```cpp
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
MutantStack<int>::iterator it = mstack.begin();
// ... iterate normally, just like any other STL container
```

## Instructions

### Compilation

```bash
make
```

Run inside each exercise's directory (`ex00/` through `ex02/`). Each Makefile compiles the corresponding source files with `c++ -Wall -Wextra -Werror` (compatible with `-std=c++98`), and includes the required `$(NAME)`, `all`, `clean`, `fclean`, and `re` rules.

### Running

```bash
./easyfind      # ex00
./span          # ex01
./mutant_stack  # ex02
```

Each exercise ships with its own `main.cpp`, demonstrating the templates and containers with realistic data sets (including large-scale tests for `Span`) and comparisons against equivalent standard containers.

## Resources

- [CPPreference — Templates](https://en.cppreference.com/cpp/language/templates)
- General documentation on STL Containers, iterators, and `<algorithm>` in C++98
- [CPPreference — std::stack](https://en.cppreference.com/cpp/container/stack)
- General documentation on `std::stack` and container adapters


**AI usage:** AI assistance was used to help draft and structure this README file (organizing sections, describing each exercise's behavior and usage) based on the actual project source code and the official subject requirements. No AI-generated code was used in the implementation of the exercises themselves; all class design and logic were written and understood by the author.

