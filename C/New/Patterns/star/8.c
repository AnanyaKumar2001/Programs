/*
5

*****
 ****
  ***
   **
    *

*/
#include<stdio.h>
int main()
{
	int i,j,k,l,z,n;
	scanf("%d",&n);
	z=n;
	for(i=1;i<=n;i++)
	{
		
		for (j=1;j<i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=z;k++)
		{
			printf("*");
		}
		z--;
		printf("\n");
		

	
	}
}