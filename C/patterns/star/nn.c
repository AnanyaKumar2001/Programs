#include<stdio.h>
int main()
{
	int i,j,k,l,z,n;
	printf("Enter n : ");
	scanf("%d",&n);

	for(i=1,z=n;i<=n;i++,z--)
	{
		
		for (j=1;j<i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=z;k++)
		{
			printf("*");
		}


		for(i=1;i<=n;i++)
		{
		
			for (j=n;j>=i;j--)
			{
				printf("*");
			}
			
	
		}	


		printf("\n");
	}




	for(i=1;i<=n;i++)
	{
		
		for (j=n;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");

	
	}

}