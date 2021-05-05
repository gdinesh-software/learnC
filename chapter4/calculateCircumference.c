#include <stdio.h>
#define PI 3.14159

int main(void) {
    double radius;
    long double circumference, area;
    printf("Enter the Radius: ");
    scanf("%lf", &radius);
    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf("The Circle with the given radius has:\nCircumference: %.3Lf\nArea: %.3Lf\n", circumference, area);
    return 0;
}
