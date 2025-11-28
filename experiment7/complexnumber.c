#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

// Function to read a complex number
struct Complex readComplex() {
    struct Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

// Function to write a complex number
void writeComplex(struct Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

// Function to subtract two complex numbers
struct Complex subtractComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

int main() {
    struct Complex num1, num2, sum, diff;
    printf("Enter first complex number:\n");
    num1 = readComplex();
    printf("Enter second complex number:\n");
    num2 = readComplex();
    sum = addComplex(num1, num2);
    diff = subtractComplex(num1, num2);
    printf("Sum: ");
    writeComplex(sum);
    printf("Difference: ");
    writeComplex(diff);
    return 0;
}
