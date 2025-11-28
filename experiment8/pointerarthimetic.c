#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *ptr = arr;

    printf("Initial address: %p, Value: %d\n", (void*)ptr, *ptr);

    ptr++; // Increment pointer
    printf("After increment: %p, Value: %d\n", (void*)ptr, *ptr);

    ptr--; // Decrement pointer
    printf("After decrement: %p, Value: %d\n", (void*)ptr, *ptr);

    return 0;
}
