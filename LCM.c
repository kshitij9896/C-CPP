#include<stdio.h>
#include<conio.h>

int main()
{
	int n1,n2,minNumber;
	printf("\n \t\t\t*********Program To Find LCM of Two Numbers..**********");
    printf("\n \t\t\t\t\t Enter Two Numbers....");
	scanf("%d %d",&n1,&n2);
	minNumber = (n1>n2) ? n1:n2;

while(1)
{
	
	if(minNumber%n1==0 && minNumber%n2==0)
	{
		printf("\n \t\t\t\t\t LCM of two Numbers is : %d", minNumber);
		break;
	}
	++minNumber;
}
	return 0;
}
