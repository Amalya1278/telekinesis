#include "queue.h"
#ifndef QUEUE_CPP
#define QUEUE_CPP
#include<iostream>

template<typename T, typename Container>
Queue<T,Container>::Queue():arr(){}

template<typename T, typename Container>
Queue<T,Container>::Queue(std::initializer_list <T> ob)
:arr(ob){}

template<typename T, typename Container>
 typename Queue<T,Container>::reference Queue<T,Container>::front(){
	return arr.front();
}

template<typename T, typename Container>
void Queue<T,Container>::pop(){
	arr.erase(arr.begin());
}

template<typename T, typename Container>
void Queue<T,Container>::push(value_type m){
	arr.push_back(m);
}

template<typename T, typename Container>
typename Queue<T,Container>::size_type Queue<T,Container>::size_s(){
	return arr.size();
}

template<typename T, typename Container>
bool Queue<T,Container>::empty_s(){
	return arr.empty();
}

template<typename T, typename Container>
Queue<T,Container>::Queue(const Queue<T>& other)
: arr(other.arr){}

template<typename T, typename Container>
Queue<T,Container>& Queue<T,Container>:: operator=(const Queue& a){
	arr=a.arr;
	return *this;
}

template<typename T, typename Container>
void Queue<T,Container>::swap(Queue& el1){
    arr.swap(el1.arr);
}

template<typename T, typename Container>
Queue<T,Container>::Queue(Queue<T>&& rhv)
:arr{rhv.arr}{}

template<typename T, typename Container>
Queue<T,Container>::~Queue(){}

template<typename T, typename Container>
bool operator<(const Queue<T, Container>& ob1, const Queue<T, Container>& ob2){
	return ob1.size_s()<ob2.size_s();
}

template<typename T, typename Container>
bool operator>(const Queue<T, Container>& ob1, const Queue<T, Container>&ob2){
	return ob1.size_s()>ob2.size_s();
}

template<typename T, typename Container>
bool operator==(const Queue<T, Container>& ob1, const Queue<T, Container>& ob2){
	return ob1.size_s()==ob2.size_s();
}

template<typename T, typename Container>
bool operator<=(const Queue<T, Container>& ob1, const Queue<T, Container>& ob2){
	return ob1.size_s()<=ob2.size_s();
}

template<typename T, typename Container>
bool operator>=(const Queue<T, Container>& ob1, const Queue<T, Container>& ob2){
	return ob1.size_s()>=ob2.size_s();
}

#endif //QUEUE_CPP
