#include<stdio.h>
#include<conio.h>
//Demonstration of Getche() method....
void main()
{
	char name[10]; 
	printf("\n Demonstration of getche() method...");
	printf("\n Enter Your Name...");
	scanf("%s",&name);
	strupr(name);
	//printf(strlen(name));
	printf("\n Name: %s",name);
	getche();    //Faster tranctions.....
	
}

