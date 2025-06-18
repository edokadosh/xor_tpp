#include "Allocator.h"

namespace allocator {

void s_AllocationNode::remove();

void* operator new(size_t size);

void operator delete(void* ptr);

void printAllocations();
} // namespace allocator
