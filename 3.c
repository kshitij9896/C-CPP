#include<stdio.h>
#include<conio.h>

int main()
{
	int no,i;
    char name[6] = "RGBRGB";
    printf("\n Enter Any Number : 4, 5, 6\n");

	while(1){
	//system("cls");
	printf("\n Enter Your Choice....");
	scanf("%d",&no);
	if(no==4 || no==5 || no==6)
	{
		if(no==4)
		{
			for(i=0;i<=3;i++)
			{
			printf("%c\t",name[i]);
				
			}
		
		}
	   if(no==5)
	   {
	   		
			   for(i=0;i<=4;i++)
			{
			printf("%c\t",name[i]);
				
			}
		 }
	   if(no==6)
	   {
	   	for(i=0;i<=6;i++)
			{
			printf("%c\t",name[i]);
				
			}
		 	
	   }
}
	
	else{
	
	printf("\n Please Enter Valid Choice");
}
}

return 0;

}

	
