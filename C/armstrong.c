#include<stdio.h>
int main()
{
	int n,x,i,a,m,j,c,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	i=n;
	while(n>0)
	{
		n=n/10;
		++x;
	}
	printf("The length of the given number is %d\n",x);
	a=i;
	while(i>0)
	{
		c=1;
		m=i%10;
		for (j=1;j<=x;j++)
		{
			c=c*m;
		}
		sum=sum+c;
		i=i/10;
	}
	if (sum==a) 
		printf("Given number is armstrong \n");
	else 
		printf("Not armstrong \n");
}