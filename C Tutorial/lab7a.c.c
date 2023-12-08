

#include <stdio.h>

void yaz_histogram(int point[], int tekrar) {
    int hsitogram[101] = {0};
    
    for (int i = 0; i < tekrar; i++) {
        hsitogram[point[i]]++;
    }

    for (int i = 0; i < 101; i++) {
        if (hsitogram[i] > 0) {
            printf("%d: ", i);
            for (int a = 0; a < hsitogram[i]; a++) {
                printf("+");
            }
            printf("\n");
        }
    }
}

int main() {
    int point[100];
    int repeat = 0;

    while (1) {
        printf("Enter your note Enter(-1) to exit");
        scanf("%d", &point[repeat]);

        if (point[repeat] == -1) {
            break;
        }

        if (point[repeat] < 0 || point[repeat] > 100) {
            printf("please enter your note between 0-100.\n");
        } else {
            repeat++;
        }
    }

    printf("your hsitogram is : \n");
    yaz_histogram(point, repeat);

    return 0;
}

