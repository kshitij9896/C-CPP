#include<iostream>
#include<conio.h>

int main()
{
	using namespace std;
int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==3||j==3)
			{
			
			cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
}
