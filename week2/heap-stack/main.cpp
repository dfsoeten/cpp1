#include <cstddef> // for std::size_t
#include <memory> // for std::uninitialized_fill

static const std::size_t stack_size = 1024 * 1024; // 1 MB!
static const std::size_t heap_size = 1024 * 1024 * 1024; // 1 gigabyte

void fill_stack() {
    char stack_object[stack_size];
    std::uninitialized_fill_n(stack_object, stack_size, 'a');
}

void fill_heap() {
    char *heap_object = new char[heap_size];
    std::uninitialized_fill_n(heap_object, heap_size, 0);
    delete[] heap_object;
}

int main() {
    fill_stack();
    return 0;
}
