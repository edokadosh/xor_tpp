#include "Allocator.h"
#include <stdlib.h>
#include <iostream>

using std::cout;
using std::endl;

AllocationNode* AllocationNode::first = nullptr;

void AllocationNode::removeSelf() {
    if (prev) {
        prev->next = next;
    } else {
        first = next;
    }
    if (next) {
        next->prev = prev;
    }
}

void* operator new(size_t size) {
    char* newMem = (char*)malloc(sizeof(AllocationNode) + size);
    AllocationNode* newNode = (AllocationNode*)newMem;
    newNode->size = size;
    newNode->prev = nullptr;
    newNode->next = AllocationNode::first;
    if (AllocationNode::first) {
        AllocationNode::first->prev = newNode;
    }
    AllocationNode::first = newNode;

    return (newMem + sizeof(AllocationNode));
}

void operator delete(void* ptr) {
    AllocationNode* nodeToDelete = (AllocationNode*)((char*)ptr - sizeof(AllocationNode));
    nodeToDelete->removeSelf();
    free(nodeToDelete);
}

void AllocationNode::printAllocations() {
    AllocationNode* curr = first;
    cout << (curr ? "Memory Allocations: " : "No memory allocated") << endl;
    while (curr) {
        cout << curr + 1 << ": Memory allocation of size - " << curr->size << endl; 
        curr = curr->next;
    }
    cout << endl;
}
