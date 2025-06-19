#include "Allocator.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
    void* a = new int[6];
    void* b = new char[10];
    AllocationNode::printAllocations();
    delete a;
    delete b;
    AllocationNode::printAllocations();
}

