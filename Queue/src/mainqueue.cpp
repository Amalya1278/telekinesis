#include "queue.h"
#include <iostream>

int main() {
    Queue<int>arr;
    arr.push(1);
    arr.push(2);
    arr.push(3);
    std::cout << arr.front() << std::endl;
    std::cout<< arr.size_s() << std::endl;
    arr.pop();
	std::cout<<arr.front();

    return 0;
}

