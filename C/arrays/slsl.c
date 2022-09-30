#include<stdio.h>
int main()
{
	int a[100],b[100],n,i,j,temp,smax,sind;
	printf("Enter no of elements : ");
	scanf("%d",&n);
	for(int i=0,j=0;i<n;i++,j++)
	{
		printf("Enter a value : ");
		scanf("%d",&a[i]);
		b[j]=a[i];

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

	smax=a[n-2];

	printf("The second largest element is %d\n",a[n-2]);
	printf("The second last element is %d\n",b[n-2]);

	for(i=0;i<n;i++)
	{
		if(b[i]==smax)
		{
			sind=i;
		}
	}

	temp=b[sind];
	b[sind]=b[n-2];
	b[n-2]=temp;

	for(int i=0;i<n;i++)
	{	
		printf("%d\t",b[i]);
	}



}