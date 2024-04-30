#ifndef CELL_H
#define CELL_H
#include<iostream>
//#include<string>
class Cell{
	private:
	std::string storage;
	public:
	operator int();//
	operator double();//
	Cell();//
	Cell(int);//
	Cell(double);//
	Cell(std::string);//
	Cell(const Cell&&);//
	Cell(const Cell&);//
	const Cell& operator=(const Cell&);//
	const Cell& operator=( Cell&&);//
	~Cell();//
	std::string get_value();//
	friend std::ostream& operator<<(std::ostream&, Cell&);
    friend std::istream& operator>>(std::istream&, Cell&);
};
std::ostream& operator<<(std::ostream& out, Cell&);//
std::istream& operator>>(std::istream& in, Cell&);//
#endif

