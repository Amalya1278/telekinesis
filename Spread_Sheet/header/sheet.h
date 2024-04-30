#ifndef SHEET_H
#define SHEET_H
#include<iostream>
#include "cell.h"
class Sheet{
	private:
	Cell** mat;
	size_t r;
	size_t c;
	public:
	Sheet();//
	Sheet(size_t);//
	Sheet(size_t, size_t);//
	Sheet(const Sheet&);//
	Sheet(Sheet&&);//
	const Sheet& operator=(const Sheet&);//
    const Sheet& operator=(Sheet&&);//
	~Sheet();//
	void set(size_t, size_t, std::string);//
	Cell get(size_t, size_t);//
	void add_row(size_t,std::string);//
	void add_col(size_t, std::string);//
	void delete_row(size_t);//
	void delete_col(size_t);//
	Cell* operator[](size_t index);//
	friend std::ostream& operator<<(std::ostream&, Sheet&);
    friend std::istream& operator>>(std::istream&, Sheet&);
};
std::ostream& operator<<(std::ostream& out, Sheet&);//
std::istream& operator>>(std::istream& in, Sheet&);//
#endif 

