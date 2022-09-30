#include<stdio.h>
int main()
{
	int n,m,r,i;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("Enter another number : ");
	scanf("%d",&m);
	printf("Press 1 for addition\nPress 2 for subtraction\nPress 3 for multiplication\nPress 4 for division\nPress 5 for modulus\nPress 0 to exit the program\n");
	while(i>0)
	{
		scanf("%d",&r);
		if(r==1)
			printf("The addition is %d\n",n+m);
		if(r==2)
			printf("The subtraction is %d\n",n-m);
		if(r==3)
			printf("The multiplication is %d\n",n*m);
		if(r==4)
			printf("The division is %d\n",n/m);
		if(r==5)
			printf("The modulus is %d\n",n%m);
		if(r==0)
			break;
		i=i+1;
	}
	return 0;
}
