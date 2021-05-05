#include <stdio.h>

int main(void) {
    /* char string[9]; */
    /* scanf("%s", string); */
    /* printf("%s", string); */

    /* char string[6]; */
    /* int var; */
    /* scanf("%s %d", string, &var); */
    /* printf("%s %d", string, var); */

    char string[6] = "baba";
    int var;
    scanf(" %d", &var);
    
    printf("%s %d", string, var);
    return 0;
}
