#include<stdio.h>
//#include<conio.h>

int main()
{
	int no;
	char name; 
	printf("Enter Your Name...");
	scanf("%c",&name);
	printf("Enter A Number...");

	scanf("%d",&no);
	
	printf("Name:%c",+name);
	printf("You Entered  : %d", no);
    return 0; 	
}
