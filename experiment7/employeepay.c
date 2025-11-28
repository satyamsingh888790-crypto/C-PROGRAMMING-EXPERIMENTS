#include <stdio.h>
#define DA_PERCENT 52.0

struct Employee {
    char name[50];
    float basic_pay;
    float gross_salary;
};

int main() {
    struct Employee employees[100];
    int i;
    for (i = 0; i < 100; i++) {
        printf("Enter employee %d name: ", i + 1);
        scanf("%s", employees[i].name);
        printf("Enter basic pay: ");
        scanf("%f", &employees[i].basic_pay);
        float da = (DA_PERCENT / 100) * employees[i].basic_pay;
        employees[i].gross_salary = employees[i].basic_pay + da;
    }
    printf("\nEmployee Payroll:\n");
    for (i = 0; i < 100; i++) {
        printf("%s: %.2f\n", employees[i].name, employees[i].gross_salary);
    }
    return 0;
}
