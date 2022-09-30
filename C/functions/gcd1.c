#include<stdio.h>
int gcd(int n,int m)
{
	if(m==0)
	{
		return n;
	}
	return gcd(m,n%m);
}
int main()
{
	int a,b;
	printf("Enter numbers : ");
	scanf("%d,%d",&a,&b);
	printf("The gcd is %d\n",gcd(a,b));

}