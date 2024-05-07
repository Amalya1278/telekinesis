#include<iostream>
#ifndef VECTOR_H
#define VECTOR_H


template<typename T>
class Vector{
	public:
   using value_type = T;
   using size_type = std::size_t;
   using referance = value_type&;
   using const_referance = const value_type&;
   using pointer = value_type*;
   using const_pointer = const value_type*;
   private:
   T* arr;
   size_type sizet;
   size_type capacity;
   void reallloc();
	public:
	Vector();
	Vector(size_type);//delegated ctor
	Vector(size_type,const_referance);
	Vector(const Vector<T>&);
	Vector <T>& operator=(const Vector <T>&);
	Vector(Vector <T>&&);
	const Vector <T>& operator=(Vector <T>&&);
	~Vector();
	void push_back(const_referance); // 
	void push_front(value_type);
	void pop_back();//
	void pop_front();
	referance at(size_type); //
	const_referance at(size_type) const;
	referance operator[](size_type);referance
	const_referance operator[](size_type)const;
	void resize(size_type);//
	void insert(size_type,value_type);
	void remove(size_type);
	size_type size();//
	size_type capacity();//
	void clear();
	bool empty();//
	bool operator==(const vector& other) const;
        bool operator!=(const vector& other) const;
        bool operator<(const vector& other) const;
        bool operator<=(const vector& other) const;
        bool operator>(const vector& other) const;
        bool operator>=(const vector& other) const;
};
#endif

	
