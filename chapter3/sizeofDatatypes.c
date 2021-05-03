#include <stdio.h>

int datatypes(void);
int main(void) {
    datatypes();
    /*
     * Int: 4
     * Float: 4
     * Char: 1
     * Long Int: 4
     * Long Long Int: 8
     * Double: 8
     * Long Double: 16
     * Short Int: 2
     * Funnily Enough This Thing has no distinction between long int and int*/
    return 0;
}

int datatypes(void) {
    printf("Types:\nInt: %zd\nFloat: %zd\nChar: %zd\nLongInt: %zd\n",
            sizeof(int), sizeof(float), sizeof(char), sizeof(long));
    printf("LongLongInt: %zd\nDouble: %zd\nLongDouble: %zd\nShortInt: %zd\n",
            sizeof(long long), sizeof(double), sizeof(long double), sizeof(short int));

}
