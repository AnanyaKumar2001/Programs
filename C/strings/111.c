#include<stdio.h>
int main()
{
	int a[20],n,i,j,l,first,last,mid,flag=0;
	printf("Enter no of elements : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",&a[i]);

	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				a[j]+=a[j+1];
				a[j+1]=a[j]-a[j+1];
				a[j]-=a[j+1];
			}

		}
	}
	for(int i=0;i<n;i++)
	{	
		printf("%d\t",a[i]);
	}
	printf("\n");
	printf("Enter element to search : ");
	scanf("%d",&l);
	first=0;
	last=n-1;
	while(first!=last)
	{
		mid=(first+last)/2;
		if(a[mid]==l)
		{
			flag=1;
			break;
		}
		else if(a[mid]<l)
		{
			first=mid+1;
		}
		else
		{
			last=mid-1;
		}

	}

	if(flag==1)
		printf("Element is found\n");
	else
		printf("Element is not found\n");

	
}