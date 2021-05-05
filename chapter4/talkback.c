#include <stdio.h>
#include <string.h>
#define PRAISE "You are very hardworking and an admirable character!"

int main(void) {
    char name[41];
    printf("Hello, What's your name! : ");
    scanf("%s", name);
    printf("Hey, %s! Nice to meet you!\n%s\n", name, PRAISE);
    long long int length = strlen(name);
    printf("You have %lld letters in your name!\n", length);
    printf("The Number 6.28 holds %zd bytes in memory!\n", sizeof 6.28);

    return 0;

    // This program really should not teach you to talk to other HUMAN BEINGS
}
