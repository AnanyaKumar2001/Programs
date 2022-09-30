#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	n%3==0&&n%5==0?printf("%d is multiple of 3 and 5",n):printf("%d is not a multiple of 3 and 5",n);
}