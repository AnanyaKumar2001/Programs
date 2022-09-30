#include<stdio.h>
int main()
{
	const float pi=3.14;
	int r;
	float p;
	printf("Enter the radius : ");
	scanf("%d",&r);
	p=2*pi*r;
	printf("The perimeter is %f",p);
}