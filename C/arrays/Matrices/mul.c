#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[20][20],i,j,k,m,n,p,q,sum;
	printf("enter no.of rows:");
	scanf("%d",&m);
	printf("enter no.of coloums:");
	scanf("%d",&n);
	printf("\n");
	printf("Enter elements of first matrix\n");
	printf("\n");
	for (int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("enter element a%d%d:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	printf("For second matrix \n");
	
	printf("enter no.of rows:");
	scanf("%d",&p);
	printf("enter no.of coloums:");
	scanf("%d",&q);
	printf("\n");
	for (int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
			printf("enter element b%d%d:",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	if(n==p)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				sum=0;
				for(k=0;k<n;k++)
				{
					sum+=a[i][k]*b[k][j];
				}
			c[i][j]=sum;
			}
		}
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<q;j++)
			{
				printf("%d\t",c[i][j]);
				if (j==q-1)
				{
					printf("\n\n");
				}
			}	
		}
	}
	
 	else
	{
		printf("Multiplication is not possible\n");
	}


}
