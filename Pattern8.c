#include<stdio.h>
#include<conio.h>
//#include<math.h>

int main()
{
	int i,j,k;
//	int z=1;
	for(i=1;i<=5;i++)
	{
		for(j=5-1;j>=i;j--)
		{
			printf(" ");
		}
			for(k=1;k<=(2*i-1);k++)
			{
				printf("%d",i);
				
			}
//			z+=2;
				printf("\n");
		}
		//printf("\n");
	
}
