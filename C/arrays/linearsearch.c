#include<stdio.h>
int main()
{
	int a[20],n,i,l;
	printf("Enter no of elements : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",&a[i]);

	}
	printf("Enter element to search : ");
	scanf("%d",&l);
	for(int i=0;i<n;i++)
	{
		if(a[i]==l)
		{
			printf("Element is found");
			break;
		}

	}

	
}