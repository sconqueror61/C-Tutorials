/*#include <stdio.h>

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
} */

#include <stdio.h>

int longestSortedSequence(int arr[], int size) {
    if (size == 0) {
        return 0;
    }
    
    int maxLength = 1;
    int currentLength = 1;
    
    for (int i = 1; i < size; i++) {
        if (arr[i] >= arr[i - 1]) {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
            currentLength = 1;
        }
    }
    
    if (currentLength > maxLength) {
        maxLength = currentLength;
    }
    
    return maxLength;
}

int main() {
    int arr[] = {3, 8, 10, 1, 9, 14, -3, 0, 14, 207, 56, 98, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int result = longestSortedSequence(arr, size);
    printf("Length of the longest sorted sequence: %d\n", result);
    
    return 0;
}
