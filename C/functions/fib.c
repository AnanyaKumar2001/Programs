#include <stdio.h>
int fibonaci(int n)
{
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	return fibonaci(n-1) + fibonaci(n-2);
}
int main()
{
	int i,n;
	printf("Enter number : ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("%d\t", fibonaci(i));
	}
	return 0;
}