#include <stdio.h>

int main(int argc, char** argv) {
    double g = 1e21;
    float rate = 10;
    double tax = g * rate;
    printf("%lf", tax);
    return 0;
}
