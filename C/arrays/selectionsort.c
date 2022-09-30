#include<stdio.h>
int main()
{
	int a[20],n,i,j;
	printf("Enter no of elements : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",&a[i]);

	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				a[i]+=a[j];
				a[j]=a[i]-a[j];
				a[i]-=a[j];
			}

		}
	}
	for(int i=0;i<n;i++)
	{	
		printf("%d\t",a[i]);
	}

}