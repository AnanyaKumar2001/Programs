#include<stdio.h>
int main()
{
	int a[20],n,i,j,small,temp,pos;
	printf("Enter no of elements : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",&a[i]);

	}

	for(i=0;i<n;i++)
	{
		small=a[i];
		for(j=i+1;j<n;j++)
		{
			if(small>a[j])
			{
				small=a[j];
				pos=j;
				temp=a[i];
				a[i]=a[pos];
				a[pos]=temp;
			}
		}

	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}


}