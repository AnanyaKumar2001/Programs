#include<stdio.h>
int main()
{
	int x=10,y=5;
	int *ix,*iy;
	ix=&x;
	iy=&y;
	printf("The addition is %d\n",*ix+*iy);
	printf("The subtraction is %d\n",*ix-*iy);
	printf("The multiplication is %d\n",*ix * *iy);
	printf("The division is %d\n",*ix / *iy);
	printf("The modulo is %d\n",*ix % *iy);

}

