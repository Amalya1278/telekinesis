#include<iostream>
#ifndef STACK_H
#define STACK_H
#include<vector>
#include <initializer_list>
template<typename T,typename Container=std::vector<T>>
class Stack{
	private:
	Container arr;
	public:
   using value_type = T;
   using size_type = std::size_t;
   using reference = value_type&;
   using const_reference = const value_type&;
   using pointer = value_type*;
   using const_pointer = const value_type*;
	Stack();
	Stack(std::initializer_list<T>);
	Stack(const Stack<T,Container>&);
	Stack(Stack <T,Container>&&);
	Stack& operator=(const Stack&);
        const Stack& operator=(Stack<T,Container>&&);
	~Stack();
	reference top();
	void pop();
	void push(value_type);
	size_type size_s();
	bool empty_s();
	void swap( Stack&);
};
template<typename T, typename Container>
bool operator<( Stack<T, Container>&,  Stack<T, Container>& );
template<typename T, typename Container>
bool operator>( Stack<T, Container>&,  Stack<T, Container>&);
template<typename T, typename Container>
bool operator==( Stack<T, Container>&,  Stack<T, Container>&);
template<typename T, typename Container>
bool operator<=( Stack<T, Container>&,  Stack<T, Container>&);
template<typename T, typename Container>
bool operator>=( Stack<T, Container>&,  Stack<T, Container>&);
#include "stack.cpp"
#endif //STACK_H

