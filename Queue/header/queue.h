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
	Queue(const Queue&);
	Queue(Queue&&);
const	Queue& operator=(const Queue&);
const Queue& operator=(Queue&&);
	~Queue();
	reference front();
	const_reference front() const;
	reference back();
	const_reference back() const;
	void pop();
	void push(const_reference);
	size_type size_s();
	bool empty_s();
	void swap( Queue&);

bool operator<(const Queue& );
bool operator>(const Queue&);
bool operator==(const Queue&);
bool operator<=(const Queue&);
bool operator>=(const Queue&);
};
#include "queue.cpp"
#endif //QUEUE_H
