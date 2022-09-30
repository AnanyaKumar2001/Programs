#include <stdio.h>
int main() /* print i and i/2 with fractions */
{
	int n;
	int es=0;
	int os=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	for (int i = 0; i <= n; i++)
	{
		i%2?es=es+i:os=os+i;
	}
	printf("The sum of even numbers is upto a given number is %d\n",es);
	printf("The sum of odd numbers is upto a given number is %d\n",os);
	return 0;
}