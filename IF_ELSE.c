#include<stdio.h>
#include<conio.h>
#undef DEPT 1 // undefining the DEPT micros to 1

//If the value of DEPT then else block will execute otherwise if block will.... 
void main()
{
	#if DEPT
	printf("\n This is demonstration of if in Macros");
	#else
	printf("\n This is Demonstration of IF-ELSE in Macros....");
	#endif
	getche();
	
	
}
