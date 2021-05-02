#include <stdio.h>

int main(void) {
    char* firstname = "Gustav";
    char* lastname = "Mahler";
    printf("%s %s <- First print statement\n", firstname, lastname);
    printf("%s <- Second print statement\n%s <- Still the second print statement\n", firstname, lastname);
    printf("%s ", firstname);
    printf("%s <- Third and Fourth Print Statement\n", lastname);
    return 0;
}
