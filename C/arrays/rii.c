#include<stdio.h>
int main()
{
	int a[20],n,i,l,e,x;
	printf("Enter no of elements : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",&a[i]);

	}
	printf("Enter element e2  : ");
	scanf("%d",&l);
	for(int i=0;i<n;i++)
	{
		if(a[i]==l)
		{

			x=i;
			if(n<20)
			{
				printf("Enter element to be inserted e1: ");
				scanf("%d",&e);
				for(i=n-1;i>=x;i--)
				{
					a[i+1]=a[i];
				}
				a[x+1]=e;
				n=n+1;
			}
			break;

		}	
			


	}
	for(int i=0;i<n;i++)
	{	
		printf("%d\t",a[i]);
	}
	

	
}
