#include<iostream>
using namespace std;


int main()
{
int a , b, i,k;
a = 48;
b = 57;
k=0;
int j = 0;
int count =0;
char st[100] ;
  cout << "enter any numerical string : ";
  cin>>st;
   k = sizeof(st-1);
    /*for( int i = 0;st[i] != '\0';i++ )
    	{
    	//	cout<<st[i];
    		count = count+1;
		}*/
 while(a<=b){
 	for(i=0;i<= k;i++)
 		{
 			if(st[i] == a)
 			{
 				//cout<<st[i];
 				j = j + (st[i] - '0') ;
 				//count= count +  st[i];
 			}
	    }
	   	a++; 
}
   cout<<"\n"<<j;
}		
