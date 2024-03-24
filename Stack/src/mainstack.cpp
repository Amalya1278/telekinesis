#include "stack.h"
#include <iostream>
int main(){
	Stack<int> arr;
    arr.push(1);
    arr.push(2);
    arr.push(3);
    std::cout  <<arr.size_s() << std::endl;
    std::cout << arr.top() << std::endl;
   // arr.pop();
    Stack<int> arr1;
    arr1.push(5);
	arr1.push(6);
	arr1.push(7);
	if(arr==arr1){
		std::cout<<"equal";
	}
    std::cout << arr1.top() << std::endl;
    arr.swap(arr1);
    std::cout << arr1.top() << std::endl;
	

    return 0;
}

