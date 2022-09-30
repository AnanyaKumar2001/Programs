#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	n%3?printf("%d is not a multiple of 3 and 5",n):(n%5?printf("%d multiple of 3 and 5",n):printf("%d not a multiple",n));
}