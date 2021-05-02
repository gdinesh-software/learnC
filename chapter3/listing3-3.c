#include <stdio.h>

int main(void) {
    int aVar = 127;
    printf("Value of %d in\n", aVar);
    printf("Binary: %d\nOctal: %o\nHex: %x\n\n", aVar, aVar, aVar);
    printf("Value of %d with prefixes\n", aVar);
    printf("Dec: %d\nOctal: %#o\nHex: %#x\n", aVar, aVar, aVar);
    return 0;
}
