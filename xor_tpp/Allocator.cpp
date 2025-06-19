#include "Allocator.h"
#include <iostream>
#include <stdlib.h>

using std::cout;
using std::endl;

AllocationNode* AllocationNode::first = nullptr;

void AllocationNode::removeSelf() {
    if (m_prev) {
        m_prev->m_next = m_next;
    } else {
        first = m_next;
    }
    if (m_next) {
        m_next->m_prev = m_prev;
    }
}

void AllocationNode::pushBack(AllocationNode* newMem, size_t size) {
    newMem->m_size = size;
    newMem->m_prev = nullptr;
    newMem->m_next = AllocationNode::first;
    if (AllocationNode::first) {
        AllocationNode::first->m_prev = newMem;
    }
    AllocationNode::first = newMem;
}


void* operator new(size_t size) {
    AllocationNode* newMem = reinterpret_cast<AllocationNode*>(malloc(sizeof(AllocationNode) + size));
    if (!newMem) {
        throw std::bad_alloc();
    }
    AllocationNode::pushBack(newMem, size);

    return newMem + AllocationNode::NODE_TO_ALLOCATED_MEMORY;
}

void operator delete(void* ptr) {
    AllocationNode* nodeToDelete = reinterpret_cast<AllocationNode*>(ptr) - 1;
    nodeToDelete->removeSelf();
    free(nodeToDelete);
}

void AllocationNode::printAllocations() {
    AllocationNode* curr = first;
    cout << (curr ? "Memory Allocations: " : "No memory allocated") << endl;
    while (curr) {
        cout << curr + AllocationNode::NODE_TO_ALLOCATED_MEMORY << ": Memory allocation of size - " << curr->m_size
             << endl;
        curr = curr->m_next;
    }
    cout << endl;
}
