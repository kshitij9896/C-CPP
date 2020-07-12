//Predifined macros in ctype.h
#include<ctype.h>
#include<stdio.h>
#include<conio.h>

void main()
{
	char d;
	int f;
	printf("\n Enter Any Character....");
	d=getche();
	 f=isalpha(d);
	 if(f!=0)
	 {
	 	printf("\n %c is a letter in",d);
	 	f=isupper(d);
	 	if(f!=0)
	 	{
	 		printf("\n Its Capital Letters");
		 }
		 else
		 {
		 	printf("\n Its Small letters");
		 }
		 
	 }
	 else
	 {
	 	
	 	f=isdigit(d);
	 	if(f!=0)
	 	printf("\n %c is a digit...",d);
	 	else
	 	{
	 		f=ispunct(d);
	 		if(f!=0)
	 		printf("\n %c is a Punctuation Symbol",d);
		 }
	 	
	 }
	 getche();
}
