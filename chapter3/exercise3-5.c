#include <stdio.h>

int main(void) {
    double secToYear = 3.156e7;
    int age;
    printf("Enter your Age: ");
    scanf("%d", &age);
    printf("You are %lf+ seconds old!\n", age * secToYear);
    return 0;
}
