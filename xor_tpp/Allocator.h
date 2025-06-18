#pragma once

namespace allocator {
// This is a data class so Im leaving the members as public.
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
} // namespace allocator
