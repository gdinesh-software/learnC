#include <stdio.h>

void one_three(void);
void one(void);
void two(void);
int main(void) {
    printf("Starting Now!\n");
    one_three();
    printf("Done!");
    return 0;
}

void one_three(void) {
    one();
    two();
}

void one(void) {
    printf("One\n");
}

void two(void) {
    printf("Two\n");
    printf("Three\n");
}
