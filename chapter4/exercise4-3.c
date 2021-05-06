#include <stdio.h>

int main(void) {
    float var;
    printf("Hello, please enter a number: ");
    scanf("%f", &var);
    printf("The Value you entered:\nIn Decimal Notation: %f\n"
            "In Exponential Notation: %e\n", var, var);
    return 0;
}
