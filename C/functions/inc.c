#include<stdio.h>
void add();
int main()
{
	int x;
	add();
	add();
	

}
void add()
{
	static int x=0;
	x++;
	printf("%d\n",x);

}