#include <stdio.h>

int main(void)
{
    int num;
    int sum = 0;
    int i;

    printf("Input a number : ");
    scanf("%i", &num);

    for (i = 0; i < num; i++)
    {
        sum += i + 1;
    }

    printf("The result is %i\n", sum);

    return 0;
}