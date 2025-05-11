#include "library2.h"
#include <iostream>
#include <string>

void print2(std::string string){
    std::cout << "FROM LIBRARY 2: " << string << std::endl;
}

int addNum(int a, int b, int c){
    return a + b + c;
}