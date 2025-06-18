#include "Allocator.h"
#include <iostream>

using std::cout;
using std::endl;
using allocator::operator new;
using allocator::operator delete;
using allocator::printAllocations;


int main() {
    void* a = new int[6];
    void* b = new char[10];
    printAllocations();
    delete a;
    delete b;
    printAllocations();
}

