#include <stdio.h>

int main(void) {
    char firstName[20], lastName[20];
    printf("Enter your First Name and Last Name: ");
    scanf("%s %s", firstName, lastName);
    printf("Your Name:\n%s %s", lastName, firstName);
    return 0;
}
