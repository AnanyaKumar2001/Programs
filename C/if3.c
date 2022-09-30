#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n%3==0)
		printf("Divisible by 3\n");
	else
		printf("Not Divisible by 3\n");
}