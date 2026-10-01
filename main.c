#include <stdio.h>

int main(void) 
{
    int answer = 59;
    int guess;
    int trials = 0;

    do {
        printf("Guess a number :");
        scanf("%i", &guess);
        trials++;

        if (guess > answer) {
            printf("high!\n");
        } else if (guess < answer) {
            printf("low!\n");
        }
    } while (guess != answer);

    printf("Congratulation! trials:%i\n", trials);

    return 0;
}