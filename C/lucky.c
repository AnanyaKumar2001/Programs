#include<stdio.h>
int main()
{
	int n,x,rev=0,r=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n>0)
	{
		x=n%10;
		rev=rev+x;
		n=n/10;
	}
	while(rev>0)
	{
		x=rev%10;
		r=r+x;
		rev=rev/10;
	}
	printf("The lucky number is %d \n",r);
}