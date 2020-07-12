#include<stdio.h>
#include<conio.h>

void main()
{
	float f_num;
	int i_num;
	//clrscr();
	printf("\n Enter Any Integer...");
	scanf("%d",&i_num);
	f_num = (float)i_num;  //converting integer values to float
	printf("\n The Floating point variant of %d is =%f"  ,i_num,f_num);
	
	
	int x=10;
	if(x>0) x++;  //this will print the value of x is 12 because the condition satisafies...
	printf("\n x=%d",x);
	
	
	
	getche();
}
