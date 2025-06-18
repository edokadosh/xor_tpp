#pragma once

class AllocationNode {
public:
    size_t size;
    AllocationNode* next;
    AllocationNode* prev;

    void removeSelf();
};

AllocationNode* first = nullptr;

void* operator new(size_t size);

void operator delete(void* ptr);

void printAllocations();
