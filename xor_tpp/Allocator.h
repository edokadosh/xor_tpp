#pragma once

class AllocationNode {
public:
    size_t size;
    AllocationNode* next;
    AllocationNode* prev;

    void removeSelf();

    static AllocationNode* first;
    static void printAllocations();
};


void* operator new(size_t size);

void operator delete(void* ptr);

