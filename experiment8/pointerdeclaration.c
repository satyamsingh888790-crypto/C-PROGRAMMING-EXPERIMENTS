#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X';

    int *ptr_int = &a;
    float *ptr_float = &b;
    char *ptr_char = &c;

    printf("Value of a: %d, Address: %p, Value pointed by ptr_int: %d\n", a, (void*)ptr_int, *ptr_int);
    printf("Value of b: %.2f, Address: %p, Value pointed by ptr_float: %.2f\n", b, (void*)ptr_float, *ptr_float);
    printf("Value of c: %c, Address: %p, Value pointed by ptr_char: %c\n", c, (void*)ptr_char, *ptr_char);

    return 0;
}
