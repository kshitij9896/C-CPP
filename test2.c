#include<stdio.h>
#include<conio.h>

int main()
{
	
	int x=20,y=10,z;
	int b=20,c=10;
	z = x*++y; //201
	int d =b*c++;  //220
	printf("\n %d",z);
	printf("\n %d",d);
    getch();
}
