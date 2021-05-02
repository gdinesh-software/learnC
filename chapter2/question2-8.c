#include <stdio.h>

int main(void) {
    int a, b;
    a = 5;
    b = 2;
    b = a;
    a = b;
    printf("Variables a: %d\nb: %d\n", a, b);
    return 0;
}
