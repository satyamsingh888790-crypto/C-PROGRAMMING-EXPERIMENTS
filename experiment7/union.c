#include <stdio.h>
#include <string.h>

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address addr;
    printf("Enter your name: ");
    scanf("%s", addr.name);
    printf("Enter your home address: ");
    scanf("%s", addr.home_address);
    printf("Enter your city: ");
    scanf("%s", addr.city);
    printf("Enter your state: ");
    scanf("%s", addr.state);
    printf("Enter your zip: ");
    scanf("%s", addr.zip);
    printf("\nPresent Address:\n");
    printf("Name: %s\n", addr.name);
    printf("Home Address: %s\n", addr.home_address);
    printf("City: %s\n", addr.city);
    printf("State: %s\n", addr.state);
    printf("Zip: %s\n", addr.zip);
    return 0;
}
