#include <stdio.h>

int main(void) {
    float height;
    char name[41];
    printf("Please Enter your Name and your height in meters: ");
    scanf("%s %f", name, &height);
    printf("\n%s, You are %.2f metres tall!", name, height/100);
}
