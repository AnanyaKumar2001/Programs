/*
5

     a
    a b 
   a b c  
  a b c d   
 a b c d e   

*/
#include<stdio.h>
int main()
{
	int i,j,k,l,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		
		for (j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for (k=1;k<=i;k++)
		{
			printf(" %c",k+96);
		}
		for (l=1;l<=i-1;l++)
		{
			printf(" ");
		}
		printf("\n");
	}
}

