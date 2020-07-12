#include<stdio.h>

int main()
{
	int no,i;
	printf("Program For Multiplication Table:\n");
	while(1)
	{
	//system("cls");
	printf("\nEnter Any Number \n");
	scanf("%d",&no);
	printf("\n Multiplication Table of %d",no);
    printf("\n");
	for(i=1;i<=10;i++)
	{
		int ans = no*i;
		printf("%d\n",ans);
	}
	
}
}
