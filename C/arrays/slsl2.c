#include<stdio.h>
void main()
{
	int a[10],n,max,min,maxpos,minpos,i,temp;
	printf("Enter no of elements : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",&a[i]);

	}
	max=a[0];
	min=a[0];
	maxpos=0;
	minpos=0;
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			maxpos=i-1;
		}
	
	}
	temp=a[maxpos];
	a[maxpos]=a[n-2];
	a[n-2]=temp;
	printf("After interchange array elemnts are: ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	
}