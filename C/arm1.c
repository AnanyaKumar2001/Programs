#include<stdio.h>
int main()
{
	int n,r=0,sum=0,i=1,c,m;
	printf("Enter a number : ");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		r=n%10;
    	n=n/10;
    	sum=sum+(r*r*r);
    	i=i+1;
	}
	if (c==sum)
    	printf("The given number is armstrong number");
	else
    	printf("The given number is not an armstrong number");
}


