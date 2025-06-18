#pragma once

namespace allocator {
/*
This struct is identical to a class but as i want this to
be a data class so this is fitting.
*/
typedef struct s_AllocationNode {
    size_t size;
    s_AllocationNode* next;
    s_AllocationNode* prev;

    void remove();
} AllocationNode;

void* first = nullptr;

void* operator new(size_t size);

void operator delete(void* ptr);

void printAllocations();
} // namespace allocator
