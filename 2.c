#include<stdio.h>

int main()
{
	int a[2][3] = {2,1,3,2,3,4};
	//printf("%d%d%d\n",*(*a+0)+0),*(*(a+0)+1),*(*(a+0)+2));
	//printf("%d%d%d\n",*(*(a+1)+0),*(*(a+1)+1),*(*(a+1)+2)));
//	printf("%d%d%d\n",*(a[0]+0),*(a[0]+1),*(a[0]+2));
	
//	printf("%d%d%d\n",*(a[1]+0),*(a[1]+1),*(a[1]+2));

//int x=4;
//printf("%d%d%d",x,x<<2,x>>2);

//int b=32768;
//printf("%d",b);

int i=10;
int j=&i;

printf("%d",*j);
}
//	return 0;
	
	
	

