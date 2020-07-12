#include<stdio.h>
#include<conio.h>

int main()
{
	int x=4,y,z;
	y = --x; //the value of x is decremented by one before printing the x
	z = x--; //the Value of x is decremented by one after printing the x
	printf("%d,%d,%d\n",x,y,z);
	return 0;
}
