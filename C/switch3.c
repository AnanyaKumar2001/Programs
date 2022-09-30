#include<stdio.h>
int main()
{
	int x;
	printf("Enter number : ");
	scanf("%d",&x);
	switch(x%3)
	{
		case 0:
			printf("Divisible\n");
			break;
		case 1:
			printf("Not Divisible\n");
			break;
		case 2:
			printf("Not Divisible\n");
			break;
	}
}
