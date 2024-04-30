#include <iostream>
#include "sheet.h"

int main() {
    Sheet sheet(3, 3);
    sheet.set(0, 0, "A1");
    sheet.set(0, 1, "B1");
    sheet.set(0, 2, "C1");
    sheet.set(1, 0, "A2");
    sheet.set(1, 1, "B2");
    sheet.set(1, 2, "C2");
    sheet.set(2, 0, "A3");
    sheet.set(2, 1, "B3");
    sheet.set(2, 2, "C3");
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

