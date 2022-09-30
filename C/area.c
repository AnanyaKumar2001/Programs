#include<stdio.h>
#define pi 3.14
int main()
{
	int r;
	float a;
	printf("Enter radius : ");
	scanf("%d",&r);
	a=pi*r*r;
	printf("The area of the circle is %f\n",a);
}