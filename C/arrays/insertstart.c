#include<stdio.h>
int main()
{
	int a[20],n,i,e;
	printf("Enter no of elements : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",&a[i]);

	}
	if(n<20)
	{
		printf("Enter element to be inserted : ");
		scanf("%d",&e);
		for(i=n-1;i>=0;i--)
		{
			a[i+1]=a[i];
		}
		a[0]=e;
		n=n+1;
	}
	else
	{
		printf("insertion is not possible");
	}

	
	for(int i=0;i<n;i++)
	{	
		printf("%d\t",a[i]);
	}
	
	
}