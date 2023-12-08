// #include <stdio.h>

// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main(void) {
//     int x=5;
//     int y=10;
//    
//     swap(&x, &y);
//     printf("x = %d, y = %d\n", x, y); // x = 10, y = 5
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// void reverseString(char *a)
// {
//     int start = 0;
//     int end = strlen(a) - 1;

//     while (start < end)
//     {
//         char temp = a[start];
//         a[start] = a[end];
//         a[end] = temp;

//         start++;
//         end--;
//     }
// }

// int main(void)
// {
//     char b[] = "I feel!";
    
//     reverseString(b);
    
//     printf("%s", b);
    
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// void vowelCount(char *str, int *counts) {
//     char vowels[] = "aeiou";
//     int len = strlen(str);

//     for (int i = 0; i < len; i++) {
        
//         for (int j = 0; j < 5; j++) {
//             if (str[i] == vowels[j]) {
//                 counts[j]++;
//                 break;
//             }
//         }
//     }
// }

// int main(void) {
//     char string[] = "i feel, therefore i am";
//     int counts[5] = {0};
//     char vowels[] = "aeiou";
//     vowelCount(string, counts);
    
//     for (int i = 0; i < 5; i++) {
//         printf("the number of %c = %d\n", vowels[i], counts[i]);
//     }
    
//     return 0;
// }

