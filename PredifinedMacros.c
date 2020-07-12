//Predifined Macros 
#include<stddef.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	//clrscr();
	printf("\n Date : %s",__DATE__);
	printf("\n Time : %s",__TIME__);
	printf("\n File Name : %s",__FILE__);
	printf("\n Line No: %s",__LINE__);
	printf("\n ANSI Keyword?: %d",__STDC__);
	getche();
	
}
