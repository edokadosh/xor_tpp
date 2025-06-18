#pragma once

class AllocationNode {
public:
    void removeSelf();
    static void pushBack(AllocationNode* newMem, size_t size);
    static void printAllocations();

    static const unsigned NODE_TO_ALLOCATED_MEMORY = 1;

private:
    size_t m_size;
    AllocationNode* m_next;
    AllocationNode* m_prev;

    static AllocationNode* first;
};


void* operator new(size_t size);

void operator delete(void* ptr);

