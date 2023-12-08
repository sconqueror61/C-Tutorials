#include <stdio.h>

int main()
{
    int friend_birth_month;
    int your_birth_month;
    int friend_birth_year;
    int your_birth_year;
    
    printf("Doğum ayını gir: ");
    scanf("%d", &your_birth_month);

	printf("Doğum yılını gir: ");
    scanf("%d", &your_birth_year);

    printf("Arkadaşının doğum ayını gir: ");
    scanf("%d", &friend_birth_month);

	
    printf("Arkadaşının doğum yılını gir: ");
    scanf("%d", &friend_birth_year);

    printf("Benim doğum günüm: %d / %d\n", your_birth_month, your_birth_year);
	printf("Arkadaşının doğum günü:%d / %d\n", friend_birth_month,friend_birth_year);

    return 0;
}
