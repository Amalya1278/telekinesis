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
	Stack(const Stack&);
	Stack(Stack&&);
	const Stack& operator=(const Stack&);//
	const Stack& operator=(Stack&&);//
	~Stack();
	reference top();//
	const_reference top()const;
	void pop();//
	void push(const_reference);//
	size_type size_s();//
	bool empty_s();//
	void swap( Stack&);//

bool operator<( const Stack&);//
bool operator>( const Stack&);//
bool operator==( const Stack&);//
bool operator<=( const Stack&);//
bool operator>=( const Stack&);//
};
#include "stack.cpp"
#endif //STACK_H
