#include<stdio.h>
int main()
{
	int a[20],n,i,l,count=0;
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
			count+=1;
		}

	}
	printf("The element is found and its count is %d\n",count);

	
}