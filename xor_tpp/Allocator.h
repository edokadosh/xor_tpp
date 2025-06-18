#pragma once

namespace allocator {

typedef struct s_AllocationNode {
    size_t size;
    s_AllocationNode* next;
    s_AllocationNode* prev;
} AllocationNode;

void* first = nullptr;

void* operator new(size_t size);

void operator delete(void* ptr);

void printAllocations();
} // namespace allocator
