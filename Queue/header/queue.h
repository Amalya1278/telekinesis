#include<iostream>
#ifndef QUEUE_H
#define QUEUE_H
#include<vector>
#include <initializer_list>
template<typename T,typename Container=std::vector<T>>
class Queue{
	private:
	Container arr;
	public:
   using value_type = T;
   using size_type = std::size_t;
   using reference = value_type&;
   using const_reference = const value_type&;
   using pointer = value_type*;
   using const_pointer = const value_type*;
	Queue();
	Queue(std::initializer_list<T>);
	Queue(const Queue<T,Container>&);
	Queue(Queue <T,Conatiner>&&);
	Queue& operator=(const Queue&);
        const Queue& operator=(Queue<T,Container>&&);
	~Queue();
	reference front();
	void pop();
	void push(value_type);
	size_type size_s();
	bool empty_s();
	void swap( Queue&);
};

template<typename T, typename Container>
bool operator<(const Queue<T, Container>&, const Queue<T, Container>& );
template<typename T, typename Container>
bool operator>(const Queue<T, Container>&, const Queue<T, Container>&);
template<typename T, typename Container>
bool operator==(const Queue<T, Container>&, const Queue<T, Container>&);
template<typename T, typename Container>
bool operator<=(const Queue<T, Container>&, const Queue<T, Container>&);
template<typename T, typename Container>
bool operator>=(const Queue<T, Container>&, const Queue<T, Container>&);
#include "queue.cpp"
#endif //QUEUE_H

