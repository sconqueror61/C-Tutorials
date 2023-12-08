#include <stdio.h>
#include <stdlib.h>

int main() {
    int point = 0;
    int wrong = 0;
    int number;
    int sum;


    while (wrong < 3) {
        int random1 = rand() % 4 + 2; 
        int random2 = rand() % 4 + 2; 
        sum = random1 + random2;

        printf("%d + %d =", random1, random2);
        scanf("%d", &number);

        if (number == sum) {
            point++;
            printf("Correct! You earned 1 point.\n");
        } else {
            wrong++; 
            printf("Wrong! The answer was %d\n", sum);
        }
    }

    printf("3 wrong answers and the game is over. Your score is %d\n", point);

    return 0;
}
