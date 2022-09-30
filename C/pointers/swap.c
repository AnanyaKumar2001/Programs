#include<stdio.h>
int main()
{
	int x,y,*xp,*yp;
	printf("Enter first number : ");
	scanf("%d",&x);
	printf("Enter second number : ");
	scanf("%d",&y);
	xp=&x;
	yp=&y;
	*xp=*xp+*yp;
	*yp=*xp-*yp;
	*xp=*xp-*yp;
	printf("After swapping first number is %d\n",*xp);
	printf("After swapping second number is %d\n",*yp);

}