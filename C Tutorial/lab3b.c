#include <stdio.h>
int main()
{
double x,y;
printf("enter x value:");
scanf("%lf",&x);
printf("enter y value:");
scanf("%lf",&y);

if (x>0 && y>0)
printf("Quadrant-1");
else if (x<0 && y>0)
printf("Quadrant-2");
else if (x<0 && y<0)
printf("Quadrant-3");
else if (x>0 && y<0)
printf("Quadrant-4");
else if (x==0 && y==0)
printf("Origin");
else if(x==0)
printf("x-axis");
else
printf("y-axis");
}