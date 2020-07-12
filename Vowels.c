#include<stdio.h>
#include<conio.h>

int main()
{
	
	char ch;
	printf("\n Enter any Character... ");
	scanf("%c",&ch);
	
	
	switch(ch)
	{
		case 'A':
		case 'a':
		 			printf("\n %c is an Vowel...",ch);
		 			break;
		
		case 'E':
		case 'e':	
					printf("\n %c is an Vowel..",ch);
					break; 	
					
		case 'I':
		case 'i':
		 			printf("\n %c is an Vowel..",ch);
					 break;
					 
		case 'O':
		case 'o':
					printf("\n %c is an Vowel..",ch);
					break;
		case 'U':
		case 'u':
					printf("\n %c is an Vowel..",ch);
					break;				
					 		
		default:
		          printf("\n Wrong Choice...");					 			
	
	}
	
}

