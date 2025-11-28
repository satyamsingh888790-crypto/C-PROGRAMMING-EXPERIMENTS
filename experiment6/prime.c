#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int ISPRIME(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    for (int i = 3; i <= sqrt(num); i += 2)
        if (num % i == 0)
            return 0;
    return 1;
}

int main() {
    int start, end;
    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers between %d and %d: ", start, end);
    for (int i = start; i <= end; i++) {
        if (ISPRIME(i))
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
