#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n%3==0)
	{
		printf("Divisible by 3\n");
		printf("The remainder is zero\n");
	}
	else
	{
		printf("Not Divisible by 3\n");
		if (n%3==1)
			printf("The reaminder is 1\n");
		else
			printf("The remainder is 2\n");
	}
}