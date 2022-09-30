#include<stdio.h>
int main()
{
	int a[20],n,i,e,x;
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
		printf("Enter index : ");
		scanf("%d",&x);
		for(i=n-1;i>=x;i--)
		{
			a[i+1]=a[i];
		}
		a[x]=e;
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