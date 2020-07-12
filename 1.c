#include<stdio.h>
#include<conio.h>

int main()
{
	int a=10,b=10;
	printf("%d %d\n",a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("After First Round %d %d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After Second Round %d %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After Last Round %d %d\n",a,b);
	return 0;
}
