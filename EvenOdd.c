#include<stdio.h>
#include<conio.h>

int main()
{
	int a;
	printf("\n\t\t\t\t\t Program to check given Number is Even or Odd...");
	while(1)
	{
	
	printf("\n \t\t\t\t\t Enter a Number...");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		printf("\n\t\t\t\t\t %d is Even Number...",a);
		
	}
	else
	{
		printf("\n\t\t\t\t\t %d is an Odd Number...",a);
	}
 }
}
