#include <stdio.h>

int main(void) {
    int num1, num2;
    char op;
    int res = 0;

    printf("Enter the calculation : ");
    scanf("%d %c %d", &num1, &op, &num2);

    switch (op)
    {
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                res = num1 / num2;
            } else {
                printf("0 can't be denominator.\n");
            }
            break;
        default:
            printf("Invalid operater\n");
            break;
    }

    printf("The result is %i\n", res);

    return 0;
}