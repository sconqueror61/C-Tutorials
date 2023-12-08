#include<stdio.h>

int main()
{
    int not;

    printf("Aldıgınız Notu Giriniz:");
    scanf("%d", &not);

    if (not >= 85) {
        printf ("Aferin");
    } else if (not >= 70) {
        printf ("Orta");
    } else if (not >= 60) {
        printf ("Geçtin");
    } else if (not < 60) {
        printf ("Kaldın");
    }
    

}