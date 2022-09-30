#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],s[20][20],c,r,i,j,n;
	printf("enter no.of rows:");
	scanf("%d",&r);
	printf("enter no.of coloums:");
	scanf("%d",&c);
	printf("\n");
	printf("Enter elements of first matrix\n");
	printf("\n");
	for (int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("enter element a%d%d:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	printf("Enter elements of second matrix\n");
	printf("\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{	
			printf("enter element b%d%d:",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	printf("The subtraction of given matrices is \n");
	for (int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{	
			s[i][j]=a[i][j]-b[i][j];

		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d\t",s[i][j]);
			
		}
		printf("\n\n");	
	}


}