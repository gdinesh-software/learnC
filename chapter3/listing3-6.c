#include <stdio.h>
#include <inttypes.h>

/* inttypes.h is header file that can be used to have portable integer types
So i32_t is always 32 bits in any machine regardless of it's architecture!!! */

int main(void) {
    int64_t aValue = 10000000000000;
    printf("aValue: %d\n", aValue);
    printf("aValue = %" PRId64 "\n", aValue); //PRId64 is a macro that is used for substitution in printf statements
    return 0;
}
