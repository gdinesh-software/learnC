#include <stdio.h>

int main(void) {
    int x, y;
    x = 10;
    y = 5;
    y = x + y;
    x = x * y;
    printf("Variables X: %d\nY: %d", x, y);
    return 0;
}
