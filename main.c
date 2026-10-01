#include <stdio.h>

int main(void) {
    int integer;
    int abs_value;

    printf("Input an integer : ");
    scanf("%i", &integer);

    if (integer < 0) {
        abs_value = -integer;
    } else {
        abs_value = integer;
    }

    printf("Absolute value of %i is %i\n", integer, abs_value);

    return 0;
}