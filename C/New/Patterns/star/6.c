/*
5


 **** **** **** ****
 *** *** *** ***
 ** ** ** **
 * * * *
    

*/
#include<stdio.h>
int main()
{
	int i,j,k,l,m,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for (j=1;j<=n-i;j++)
		{
			printf(" ");
			for (k=1;k<=n-i;k++)
			{
				printf("*");
			}
		}

		for (l=1;l<=i-1;l++)
		{
			printf(" ");
			for (m=1;m<=n-i;m++)
			{
				printf("*");
			}
		}

	}
}