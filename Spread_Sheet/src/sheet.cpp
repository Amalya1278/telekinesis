#include<iostream>
#include "sheet.h"
Sheet::Sheet(){
	mat=nullptr;
	r=0;
	c=0;
}
Sheet::Sheet(size_t n)
: r{n}
, c{n}
{
	mat=new Cell*[r];//for rows
	for(size_t i=0;i<n;i++){
		mat[i]=new Cell[n];//memory for columns for each row

  }
}
Sheet::Sheet(size_t row, size_t col)
: r{row}
, c{col}
{
	mat=new Cell*[r];
	for(int i=0;i<row;i++){
		mat[i]=new Cell[col];
	}
}
Sheet::~Sheet(){
	if(mat!=nullptr){
	for (size_t i = 0; i < r; ++i) {
        delete[] mat[i];
    }
    delete[] mat;
	}
}
void Sheet::set(size_t row,size_t col,std::string str){
	mat[row][col]=str;
}
Cell Sheet::get(size_t row,size_t col){
	return mat[row][col];
}
Cell* Sheet::operator[](size_t index){
	return mat[index];
}
Sheet::Sheet(const Sheet& rhv){
	r=rhv.r;
	c=rhv.c;
	mat=new Cell*[r];
	for(size_t i=0;i<rhv.r;i++){
		mat[i]=new Cell[c];
		for(size_t  j=0;j<rhv.c;j++){
			mat[i][j]=rhv.mat[i][j];
		
	}
}
}
Sheet::Sheet(Sheet&& rhv)
: r{rhv.r}
, c{rhv.c}
, mat{rhv.mat}
{
	rhv.r=0;
	rhv.c=0;
	rhv.mat=nullptr;
}
const Sheet& Sheet::operator=(const Sheet& rhv){
	if(this!=&rhv){
		for (size_t i = 0; i < r; ++i) {
            delete[] mat[i];
        }
        delete[] mat;
		r=rhv.r;
		c=rhv.c;
		mat=new Cell*[r];
	for(size_t i=0;i<rhv.r;i++){
		mat[i]=new Cell[c];
		for(size_t j=0;j<rhv.c;j++){
			mat[i][j]=rhv.mat[i][j];
     		}
    	}
	}
	return *this;
}
const Sheet& Sheet::operator=(Sheet&& rhv){
	if(this!=&rhv){
		for (size_t i = 0; i < r; ++i) {
            delete[] mat[i];
        }
        delete[] mat;
		r=rhv.r;
		c=rhv.c;
		mat=rhv.mat;
		rhv.r=0;
		rhv.c=0;
		rhv.mat=nullptr;
	}
	return *this;
}
std::ostream& operator<<(std::ostream& out, Sheet& rhv)
{   
    for (size_t i = 0; i < rhv.r; i++) {
        for (size_t j = 0; j < rhv.c; j++)
        {
            out << rhv.mat[i][j];
        }
        
    }
    return out;
    
}

std::istream& operator>>(std::istream& in, Sheet& rhv)
{
    for (size_t i = 0; i < rhv.r; i++) {
        for (size_t j = 0; j < rhv.c; j++)
        {
            in >> rhv.mat[i][j];
        }
        
    }
    return in;
}
void Sheet::add_row(size_t n, std::string str){
	Cell** arr=new Cell*[r+n];
	for(size_t i=0;i<r+n;i++){
		arr[i]=new Cell[c];
	}
	for(size_t i=0;i<r;i++){
		for(size_t j=0;j<c;j++){
			arr[i][j]=mat[i][j];
		}
	}
	for(size_t i=r;i<r+n;i++){
		for(size_t j=0;j<c;j++){
			arr[i][j]=str;
		}
	}
	for(size_t i=0;i<r;i++){
		delete[]mat[i];
	}
	delete[]mat;
	mat=arr;
	r=r+n;
}
void Sheet::add_col(size_t n, std::string str){
	Cell** arr=new Cell*[r];
	for(size_t i=0;i<r;i++){
		arr[i]=new Cell[c+n];
	}
	for(size_t i=0;i<r;i++){
		for(size_t j=0;j<c;j++){
			arr[i][j]=mat[i][j];
		}
	}
	for(size_t i=0;i<r;i++){
		for(size_t j=c;j<c+n;j++){
			arr[i][j]=str;
		}
	}
	for(size_t i=0;i<r;i++){
		delete[]mat[i];
	}
	delete[] mat;
	mat=arr;
	c=c+n;
}
void Sheet::delete_row(size_t index){
	if(index>=r){
		std::cout<<"out of range";
		return;
	}


	Cell** arr=new Cell*[r-1];
	for(size_t i=0,k=0;i<r;i++){
		if(i!=index){	
			arr[k++]=mat[i];
			
			}
			else{
				delete[]mat[i];
         	}
	}
    delete[] mat;
    mat = arr;
    r=r-1;
}
void Sheet::delete_col(size_t index){
	Cell** arr=new Cell*[r];
	for(size_t i=0;i<r;i++){
		arr[i]=new Cell[c-1];
	}
	for(size_t i=0;i<r;i++){
		int k=0;
		for(size_t j=0;j<c;j++){
			if(i!=index){
			arr[i][k]=mat[i][j];
			k++;
			}

		}
	}
	 for (size_t i = 0; i < r; ++i) {
        delete[] mat[i];
    }
    delete[] mat;
    mat = arr;
    c=c-1;
}
