#include<stdio.h>
int main()
{
	int a[20],n,i,j,ins;
	printf("Enter no of elements : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",&a[i]);

	}

	for(i=1;i<n;i++)
	{
		ins=a[i];
		for (j=i-1;j>=0;j--)
		{
			if(ins>a[j])
			{
				a[j+1]=a[j];
					if(j==0)
					{
						a[j]=ins;
						break;
					}
			}
			else if(ins<a[j])
			{
				a[j+1]=ins;
				break;
			}

		}


	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

		
}