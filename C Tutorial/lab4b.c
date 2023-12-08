#include <stdio.h>

int main(){

    int a, b;
    for (int a = 8; a <= 18; a+=2){
        for (int b = 0; b <= a; b++)
        {
            printf("*");
        }
        printf("\n");
    }

}