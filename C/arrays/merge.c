#include<stdio.h>
int main()
{
	int a[20],b[20],c[20],x[100],n,m,o,i,j,k;


	printf("Enter no of elements : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",&a[i]);

	}
	printf("Enter no of elements in another array : ");
	scanf("%d",&m);
	for(int j=0;j<m;j++)
	{
		printf("Enter a value : ");
		scanf("%d",&b[j]);

	}
	printf("Enter no of elements in another array : ");
	scanf("%d",&o);
	for(int k=0;k<o;k++)
	{
		printf("Enter a value : ");
		scanf("%d",&c[k]);

	}

	for(int i=0;i<n;i++)
	{
		x[i]=a[i];
	}
	for(int i=n,j=0;i<n+m;i++,j++)
	{
		x[i]=b[j];
	}
	for(int i=n+m,k=0;i<n+m+o;i++,k++)
	{
		x[i]=c[k];
	}
	for(int i=0;i<n+m+o;i++)
	{	
		printf("%d\t",x[i]);
	}
	
	
}