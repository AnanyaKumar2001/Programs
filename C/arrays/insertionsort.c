#include<stdio.h>
int main()
{
	int a[20],i,j,n,temp;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",&a[i]);

	}

	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i;
		while(j>0 && a[j-1]<temp)
		{
			a[j]=a[j-1];
			j=j-1;

		}
		a[j]=temp;

	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}


}
