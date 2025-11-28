#include <stdio.h>

// Recursive Fibonacci function
int FIBO(int num) {
    if (num <= 1)
        return num;
    else
        return FIBO(num - 1) + FIBO(num - 2);
}

int main() {
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci sequence: ");
    for (i = 0; i < n; i++)
        printf("%d ", FIBO(i));
    printf("\n");
    return 0;
}
