#include "cell.h"
#include<iostream>
#ifndef CELL_CPP
#define CELL_CPP
Cell::operator int(){
	return std::stoi(storage);
}
Cell::operator double(){
	return std::stod(storage);
}
Cell::Cell(){
	storage=std::string("0");
}
Cell::Cell(int n){
	storage=n;
}
Cell::Cell(double n){
	storage=n;
}
Cell::Cell(std::string n){
	storage=n;
}
Cell::Cell(const Cell& rhv){
	storage=rhv.storage;
}
Cell::Cell(const Cell&& rhv)
:storage(std::move(rhv.storage))
{
	const_cast<std::string&>(rhv.storage) = std::move(std::string(1, '0'));

	}
const Cell& Cell::operator=(const Cell& rhv){
	if(this!=&rhv){
		storage=rhv.storage;
	}
	return *this;
}
const Cell& Cell:: operator=(Cell&& rhv){
	if(this!=&rhv){
		storage=rhv.storage;
		rhv.storage=std::string("0");
	}
	return *this;
}
Cell::~Cell(){}
std::string Cell::get_value(){
	return storage;
}
std::ostream& operator<<(std::ostream& out, Cell& rhv){
	out<<rhv.get_value();
	return out;
}
std::istream& operator>>(std::istream& in, Cell& rhv){
	in>>rhv.storage;
	return in;
}
#endif

