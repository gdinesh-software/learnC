#include <stdio.h>

int main(void) {
    int height;
    printf("Enter your height in centimeters! : ");
    scanf("%d", &height);
    printf("Your Height is %.2lfinches", height/2.54);
    return 0;
}
