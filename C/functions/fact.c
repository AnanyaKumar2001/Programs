#include<stdio.h>
int fact(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	return n*fact(n-1);
}
int main()
{
	int i;
	printf("Enter number : ");
	scanf("%d",&i);
	printf("Factorial of given number is %d\n",fact(i));
}