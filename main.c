#include <stdio.h>

int main(void)
{
    int integer;

    printf("Input an integer :");
    scanf("%i", &integer);

    if (integer > 0)
        printf("Positive.\n");
    else if (integer < 0)
        printf("Negative.\n");
    else
        printf("Zero.\n");

    return 0;
}