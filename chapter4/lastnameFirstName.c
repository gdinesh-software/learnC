#include <stdio.h>

int main(void) {
    char firstName[21], lastName[21];
    printf("Enter Your First Name And Your Last Name:\n");
    scanf("%s %s", firstName, lastName);
    printf("So you are %s %s\n"
            "Nice to meet you %s!", firstName, lastName, firstName);
    return 0;
} 
