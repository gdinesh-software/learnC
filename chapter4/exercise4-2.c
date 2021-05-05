#include <stdio.h>
#include <string.h>

int main(void) {
    char firstName[21];
    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("Your First Name is : \"%s\"\n", firstName);
    printf("Your First Name in fields is : \"%20s\"\n", firstName);
    printf("Your First Name in fields is : \"%-20s\"\n", firstName);
    printf("Your First Name in fielss is : \"%24s\"\n", firstName);
    return 0;
}
