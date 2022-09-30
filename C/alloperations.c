#include<stdio.h>
int main()
{
	int n,m;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("Enter another number : ");
	scanf("%d",&m);
	printf("The sum is %d\n",n+m);
	printf("The difference is %d\n",n-m);
	printf("The product is %d\n",n*m);
	printf("The division is %d\n",n/m);
	printf("The modulus is %d\n",n%m);
	printf("The bitwise and is %d\n",n&m);
	printf("The bitwise or is %d\n",n|m);
	printf("The bitwise xor is %d\n",n^m);
	printf("The bitwise leftshift is %d\n",n<<m);
	printf("The bitwise rightshift is %d\n",n>>m);
	printf("The bitwise negation of n is %d\n",~n);
	printf("The bitwise negation of m is %d\n",~m);
	printf("The relational greater than is %d\n",n>m);
	printf("The relational less tham is %d\n",n>m);
	printf("The relational greater than or equal to  is %d\n",n>=m);
	printf("The relational less than or equal to is %d\n",n<=m);
	printf("The relational equal is %d\n",n==m);
	printf("The logical and is %d\n",n&&m);
	printf("The logical or is %d\n",n||m);
	printf("The logical not of n is %d\n",!n);
	return 0;
}
