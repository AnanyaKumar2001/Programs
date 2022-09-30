#include<stdio.h>
int main()
{
	int n,m,i=1,c=0,lcm;
	printf("Enter first number : ");
	scanf("%d",&n);
	printf("Enter second number : ");
	scanf("%d",&m);
	while(i<=n)
	{
		if(n%i==0 && m%i==0)
		{
			c=i;
		}
		i=i+1;
	}
	printf("The gcd of given two numbers is : %d\n",c);
	lcm=(m*n)/c;
	printf("The lcm of given two numbers is : %d",lcm);

}
