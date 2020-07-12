#include<stdio.h>
#include<conio.h>
#define B 1
//B is defined to 1 if there is no declaration of A the Error Will be raised....
void main()
{
	#if !defined(A)
	#error MACRO A IS NOT DEFINED....
	#else
	printf("\n Macro Found...");
	#end if
	getche();
	
}
