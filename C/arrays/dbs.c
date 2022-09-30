#include<stdio.h>
int main()
{
	int a[20],n,i,j,temp;
	printf("Enter no of elements : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",&a[i]);

	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j+1]>a[j])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}

		}
	}
	for(int i=0;i<n;i++)
	{	
		printf("%d\t",a[i]);
	}

}