#include <iostream>
#include "sheet.h"

int main() {
    Sheet sheet(3, 3);
    sheet.set(0, 0, "a");
    sheet.set(0, 1, "b");
    sheet.set(0, 2, "c");
    sheet.set(1, 0, "d");
    sheet.set(1, 1, "e");
    sheet.set(1, 2, "f");
    sheet.set(2, 0, "g");
    sheet.set(2, 1, "u");
    sheet.set(2, 2, "p");
    std::cout << "Sheet without any actions" << std::endl;
    std::cout << sheet << std::endl;
    sheet.add_row(1, "val");
	std::cout<<"Sheet after adding row"<<std::endl;
    std::cout << sheet << std::endl;
    sheet.add_col(1, "val");
	std::cout<<"Sheet after adding column"<<std::endl;
    std::cout << sheet << std::endl;
    sheet.delete_row(1);
	std::cout<<"Sheet after deleting row"<<std::endl;
    std::cout << sheet << std::endl;
    return 0;
}

