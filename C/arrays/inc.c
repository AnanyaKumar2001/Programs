#include<stdio.h>
int main()
{
	int a,b=11;
	a=++b + ++b + ++b;
	printf("%d\n",a);
}