#include<stdio.h>
int main()
{
	int i,j,n,a[100];
	printf("enter the number of elements:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
			printf("Enter a value : ");
			scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==50)
			{
				printf("the pairs are %d,%d\n",a[i],a[j]);
			}
		}
	}
}
	
