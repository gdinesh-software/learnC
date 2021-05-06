#include <stdio.h>
#include <string.h>

int main(void) {
    char firstName[21], lastName[21];
    printf("Enter your name: ");
    scanf("%s %s", firstName, lastName);
    printf("%-21s %-21s\n%-21zd %-21zd",
            firstName, lastName, strlen(firstName), strlen(lastName));

}
