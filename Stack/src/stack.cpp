#include "stack.h"
#ifndef STACK_CPP
#define STACK_CPP
#include<iostream>

template<typename T, typename Container>
Stack<T,Container>::Stack():arr(){}

template<typename T, typename Container>
Stack<T,Container>::Stack(std::initializer_list <T> ob)
:arr(ob){}

template<typename T, typename Container>
 typename Stack<T,Container>::reference Stack<T,Container>::top(){
	return arr.back();
}

template<typename T, typename Container>
void Stack<T,Container>::pop(){
	arr.pop_back();
}

template<typename T, typename Container>
void Stack<T,Container>::push(const_reference m){
	arr.push_back(m);
}

template<typename T, typename Container>
typename Stack<T,Container>::size_type Stack<T,Container>::size_s(){
	return arr.size();
}

template<typename T, typename Container>
bool Stack<T,Container>::empty_s(){
	return arr.empty();
}

template<typename T, typename Container>
Stack<T,Container>::Stack(const Stack& other)
: arr(other.arr){}

template<typename T, typename Container>
const Stack<T,Container>& Stack<T,Container>:: operator=(const Stack& a){
	if(this!=&a){
	arr=a.arr;
	}
	return *this;
}
template<typename T, typename Container>
const Stack<T,Container>& Stack<T,Container>:: operator=( Stack&& a){
	if(this!=&a){
	arr=a.arr;
	a.arr=nullptr;
	}
	return *this;
}

template<typename T, typename Container>
void Stack<T,Container>::swap(Stack& el1){
    arr.swap(el1.arr);
}

template<typename T, typename Container>
Stack<T,Container>::Stack(Stack&& rhv)
:arr(std::move(rhv.arr)){}

template<typename T, typename Container>
Stack<T,Container>::~Stack(){}

template<typename T, typename Container>
bool operator<( Stack<T, Container>& ob1,  Stack<T, Container>& ob2){
	if( ob1.size_s()<ob2.size_s()){
		return true;
	}
	return false;

}

template<typename T, typename Container>
bool operator>( Stack<T, Container>& ob1,  Stack<T, Container>&ob2){
	if( ob1.size_s()>ob2.size_s()){
		return true;
	}
	return false;
}

template<typename T, typename Container>
bool operator==( Stack<T, Container>& ob1,  Stack<T, Container>& ob2){
	if( ob1.size_s()==ob2.size_s()){
		return true;
	}
	return false;
}

template<typename T, typename Container>
bool operator<=( Stack<T, Container>& ob1,  Stack<T, Container>& ob2){
	if( ob1.size_s()<ob2.size_s()){
		return true;
	}
	if(ob1.size_s()==ob2.size_s()){
	return true;
	}
	return false;
}

template<typename T, typename Container>
bool operator>=( Stack<T, Container>& ob1,  Stack<T, Container>& ob2){
	if( ob1.size_s()>ob2.size_s()){
		return true;
	}
	if(ob1.size_s()==ob2.size_s()){
	return true;
	}
	return false;
}

#endif
