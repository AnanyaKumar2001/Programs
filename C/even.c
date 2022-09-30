#include<stdio.h>
int main()
{
	int i,count=0,n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i>0;i++)
	{
		if (i%2==0)
		{
			count=count+1;
			printf("The even number are %d \t",i);
			if (count==n)	break;
		}
		
	}
}