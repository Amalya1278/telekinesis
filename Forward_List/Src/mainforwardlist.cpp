#include "forward_list.h"
#include<iostream>
int main(){
	Forward_list<int> list;
	list.push_back(2);
	list.push_back(3);
	list.push_back(5);
	list.insert(2,8);
	list.pop_back();
//	list.traverse();
/*	list.remove(8);
	list.remove(2);
	list.remove(3);
	std::cout<<" ";*/
	Forward_list<int> list1;
	list1=list;
	list1.traverse();
	list.empty();
	return 0;
}
