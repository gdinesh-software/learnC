#include <stdio.h>

int main(void) {
    float downLoad, fileSize;
    printf("Please Enter the filesize you want to download: ");
    scanf("%f", &fileSize);
    printf("Also Please Enter the download speed in mega bytes per second!: ");
    scanf("%f", &downLoad);
    printf("\nThe file will download in %f seconds!\n", fileSize/downLoad);
    return 0;
}
