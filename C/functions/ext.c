#include<stdio.h>
int main()
{
	extern int c;
	c++;
	printf("%d\n",c);
}
int c=5;
