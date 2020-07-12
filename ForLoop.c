#include<stdio.h>
#include<conio.h>

void main()
{
//	int i=0;
//	for(i=1;i<=10;i++)
//	{
//		printf("%d\n",i);
//	}
	
	int no;
	printf("\n Enter any number: ");
	scanf("%d",&no);
	int i=1;
	int fact=1;
	for(i=1;i<=no;i++)
     {
        fact=fact*i;
     } 

	  printf("\n The Factorial is %d",fact);	
	
}
