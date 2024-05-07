#include "vector.h"
#ifndef VECTOR_CPP
#define VECTOR_CPP

template<typename T>
 Vector<T>::Vector(){
	sizet=0;
	capacity=0;
	arr=nullptr;
}
template<typename T>
 Vector<T>::Vector(size_type n,const_referance val): arr(nullptr),sizet(0){


	capacity=n;
	arr=new value_type[capacity];
	for(int i=0;i<sizet;i++){
		arr[i]=val;
	}
}
template<typename T>
Vector<T>::Vector(size_type s)
:Vector(s,value_type()){}
template<typename T>
Vector<T>::Vector(Vector<T>&& rhv)
:sizet{rhv.sizet}
,capacity{rhv.capacity}
,arr{rhv.arr}
{
	rhv.sizet=0;
	rhv.capacity=0;
	rhv.arr=nullptr;
}
template<typename T>
const Vector<T>& Vector<T>::operator=( Vector <T>&& rhv){
	if(this!=&rhv){
	this->clear();
	sizet=rhv.sizet;
	capacity=rhv.capacity;
	arr=rhv.arr;
	rhv.arr=nullptr;
	}
	return *this;
}
template<typename T>
 Vector<T>::~Vector(){
	 delete[]arr;
}
template<typename T>
Vector<T>::Vector(const Vector<T>& rhv){
	this->sizet=rhv.sizet;
	this->capacity=rhv.capacity;
	this->arr=new T[this->capacity];
	for(int i=0;i<sizet;i++){
		arr[i]=rhv.arr[i];
	}
}
template<typename T>
 Vector <T>& Vector<T>::operator=(const Vector <T>& rhv){
	if(this!=&rhv){
		clear();
		sizet=rhv.sizet;
		capacity=rhv.capacity;
		arr=new T[capacity];
		for(int i=0;i<sizet;i++){
			arr[i]=rhv.arr[i];
		}
	}
	return *this;
}
template<typename T>
void Vector<T>::push_back(const_referance  n){
	if(capacity==sizet){
		reallloc();
	}
   arr[sizet]=n;
	sizet++;
}
template<typename T>
void Vector<T>::resize(size_type n){
	if(n<sizet){
		sizet=n;
	}
else	if(n>sizet){
		capacity=n;
		reallloc();
	}
	sizet=n;
}
template<typename T>
void Vector<T>:: remove(size_type index){
	if(index>=0 && index<sizet){
		for(int i=index;i<sizet-1;i++){
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	
	sizet-=1;
	}
}
template<typename T>
void Vector<T>::push_front(value_type a){
	sizet++;
	for(int i=sizet-1;i>0;i--){
		int temp=arr[i];
		arr[i]=arr[i-1];
		arr[i-1]=temp;
	}
	arr[0]=a;
}
template<typename T>
void Vector<T>::pop_back(){
	if(sizet>0){
	--sizet;
	}
}
template<typename T>
void Vector<T>::pop_front(){
	for(int i=1;i<sizet;i++){
		arr[i-1]=arr[i];
	}
	sizet-=1;
}
template<typename T>
typename Vector<T>::referance Vector<T>::at(size_type index){
	if(index>=sizet){
		std::cout<<"cant return";
	}
	else{
	return arr[index];
   }
}
template<typename T>
typename Vector<T>::const_referance Vector<T>::at(size_type index) const{
	if(index>=sizet){
		std::cout<<"cant return";
	}else{
	return arr[index];
	}
}
template<typename T>
typename Vector<T>::referance Vector<T>::operator[](size_type index){
	return arr[index];
}
template<typename T>
typename Vector<T>::const_referance Vector<T>::operator[](size_type index)const{
	return arr[index];
}

template<typename T>
void Vector<T>:: insert(size_type index, value_type n){
	sizet++;
	if(index>=0 && index<sizet){
			for(int i=sizet-1;i>index;i--){
			int temp=arr[i];
			arr[i]=arr[i-1];
			arr[i-1]=temp;
		}
	
		arr[index]=n;
	
			
}
}
template<typename T>
typename Vector<T>::size_type Vector<T>::capacity_(){
	return capacity;
}
template<typename T>
void Vector<T>::reallloc(){
	capacity*=2;
	T* temp=new T[capacity];
	for(int i=0;i<sizet;i++){
		temp[i]=arr[i];
	}
	delete[] arr;
	arr=temp;
}
template<typename T>
size_t Vector<T>::size(){
	return sizet;
}
template<typename T>
bool Vector<T>::empty(){
	if(sizet==0){
		return true;
	}
	return false;
}
template<typename T>
void Vector<T>::clear(){
	delete[] arr;
	arr=nullptr;
	sizet=0;
}
template<typename T>
bool Vector<T>::operator==(const Vector& other)const{
	if (this->sizet!=other.sizet){
		return false;
	}
	for(int i=0;i<sizet;i++){
		if(arr[i]!=other.arr[i]){
			return false;
		}
	}
	return true;
}
template <typename T>
bool Vector<T>::operator!=(const Vector& other)const{
	if(*this!=other){
		return true;
	}
	return false;
}
template<typename T>
bool Vector<T>::operator<(const Vector& other)const{
	if(sizet<other.sizet){
		return true;
	}
	std::cout<<"no";
	return false;
}
template<typename T>
bool Vector<T>::operator<=(const Vector& other)const{
	if(sizet<other.sizet){
		return true;
	}
	if(sizet==other.sizet){
		return true;
	}
	return false;
}
template<typename T>
bool Vector<T>::operator>(const Vector& other)const{
	if(sizet>other.sizet){
		return true;
	}
	return false;
}
template<typename T>
bool Vector<T>::operator>=(const Vector& other)const{
	if(sizet>other.sizet){
		return true;
	}
	if(sizet==other.sizet){
		return true;
	}
	return false;
}
#endif

			
