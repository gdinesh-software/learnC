#include <stdio.h>

int main(void) {
    float weight;
    double value;
    printf("Let's Calculate How much you are worth\n");
    printf("for your weight in platinum\n");
    printf("Please enter your weight in kgs: ");
    scanf("%f", &weight); // The & Symbol returns the address of the variable
    value = weight * 38661.27; // The Exchange Rate of Platinum in kg at 2/5/2021
    printf("Wow You are worth a astounding amount of\n");
    printf("$%.2llf\nIf price decreases please increase your weight", value);
    return 0;
}
