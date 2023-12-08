#include <stdio.h>

int main() {
    int max, low, i;

    printf("Enter the upper limit value: ");
    scanf("%d", &max);

    printf("Please enter a lower limit: ");
    scanf("%d", &low);

    printf("Numbers from %d to %d in increments of 3:\n", low, max);

    for (i = low; i <= max; i += 3) {
        printf("%d\n", i);
    }

    return 0;
}
