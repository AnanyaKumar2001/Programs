/*
5

     *
    * * 
   * * *  
  * * * *   
 * * * * *    

*/
#include<stdio.h>
int main()
{
	int i,j,k,l,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for (j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for (k=1;k<=i;k++)
		{
			printf(" *");
		}
		for (l=1;l<=i-1;l++)
		{
			printf(" ");
		}
	}
}