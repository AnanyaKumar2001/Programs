#include<stdio.h>
int main()
{
	int n , i=2 , j=1;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(i<n)
	{
		if (n%i==0)
		{
			j=0;
		}
		i=i+1;

	}
	if (j==1)
		printf("The given number is a prime number\n");
	else
		printf("The given number is not a prime number\n");
	return 0;
}