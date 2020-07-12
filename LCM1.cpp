#include<iostream>
#include<conio.h>


void check(int n1,int n2)
{
	int minNumber;
	minNumber = (n1>n2) ? n1:n2;
	while(1)
	{
		if(minNumber%n1==0 && minNumber%n2==0)
		{
			std::cout<<"\n The LCM of two numbers are:" <<+minNumber;
			break;
		}
		
	}
	  ++minNumber;
	  	
}
int main()
{
	int a,b,minNumber;
	std::cout<<"\n Enter Two Numbers:";
	std::cin>>a>>b;
	check(a,b);
	return 0;
	
	
}
