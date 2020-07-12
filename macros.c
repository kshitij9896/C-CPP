#define PI 3.14
#include<stdio.h>
#include<conio.h>

void main()
{
	float r,area,perimeter;
	//clrscr();
	printf("\ Enter Radius of circle in cms-:");
	scanf("%d", &r);
	area = PI*r*r;
	perimeter = 2*PI*r;
	printf("\n Area of Circle = %f",area);
	printf("\n Perimeter of Circle = %f",perimeter);
	getche();
}

