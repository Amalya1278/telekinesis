
#include "vector.h"
#include<iostream>

int main() {
    Vector<int> v;
    v.push_back(1);
    v.push_back(2);
	
    v.push_back(3);
//	v.pop_front();
    std::cout << std::endl;
   // v.pop_back();
  //  v.push_front(5);
    v.insert(1, 15);
  //  v.remove(2);

    for (size_t i = 0; i < v.size(); ++i) {
        std::cout << v.at(i) << " ";
    }
    std::cout << std::endl;
	Vector<int> a;
	a.push_back(2);
	a.push_back(8);
	v<a;


    return 0;
}
