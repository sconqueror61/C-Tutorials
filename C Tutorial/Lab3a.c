#include <stdio.h>

int main()
{

    float hourly_salary = 10;
    float how_much_worked;
    float x;
    float y;
    printf("enter # of hours worked: ");
    scanf("%f", &how_much_worked);

    if (how_much_worked < 40)
    {
        x = hourly_salary * how_much_worked;
        printf("Your salary is = %f", x);
    }
    else
    {
        x = hourly_salary * how_much_worked; 
        y = hourly_salary + ((how_much_worked - 40) * 5);
        printf("Your salary is = %f", y);
    }
