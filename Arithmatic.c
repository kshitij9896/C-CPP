#include<stdio.h>
#include<conio.h>
#include<dos.h>
//#include<stdlib.h>


void addition(int a,int b)
{
	int c;
	c=a+b;
	printf("\n Addition is %d",c);
}

void subtraction(int a,int b)

{
	int c;
	c = a-b;
	printf("\n Subtraction is %d",c);
	}	
	
void mul(int a,int b)
{
	int c;
	c = a*b;
	printf("\n Multiplication is %d",c);
}

void div(int a,int b)
{
	int c;
	c=a/b;
	printf("\n Division is %d",c);
	
}



void main()
{
		
int n1,n2;
int ch=1;

printf("Program for Arithmatic operations....!!");

printf("\n Enter Two Numbers...");
scanf("%d%d",&n1,&n2);

while(ch!=0)
{
//system("cls");

printf("\n 1.Addition");
printf("\n 2.Subtraction");
printf("\n 3.Multiplication");
printf("\n 4.Division");
//printf("\n 5. Exit..");
printf("\n Enter your choice");
scanf("%d",&ch);

	switch(ch)
	{
	
	      case 1:
		          addition(n1,n2);
		          break;
          
		  case 2:
		          subtraction(n1,n2);
		          break;
          case 3:
		  	
		  	       mul(n1,n2);
				   break;
				   
		  case 4:
		  		  div(n1,n2);
		  		  break;
		  		  
		  //case  5:
		   //        exit(0);		  
		  		  
		  default:
		          printf("Wrong Choice...!!!");		  
		         		   
	
	}
}
}
	


	
	
