#include <stdio.h>

void modifyValue(int *x, float *y, char *z) {
    *x = *x + 5;
    *y = *y + 1.5;
    *z = 'Y';
}

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X';

    printf("Before: a=%d, b=%.2f, c=%c\n", a, b, c);
    modifyValue(&a, &b, &c);
    printf("After: a=%d, b=%.2f, c=%c\n", a, b, c);

    return 0;
}
