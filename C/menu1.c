#include<stdio.h>
int main()
{
	int a,b,n;
	char c;
	do
	{
		printf("Enter two numbers :  ");
		scanf("%d,%d",&a,&b);
		printf("1 = add\n2 = sub\n3 = mul\n4 = div\n5 = mod\n");
		printf("Enter a number  : ");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("%d\n",a+b);
			case 2:
				printf("%d\n",a-b);
			case 3:
				printf("%d\n",a*b);
			case 4:
				printf("%d\n",a/b);
			case 5:
				printf("%d\n",a%b);
				break;
		}
	printf("Enter y to continue or N to stop : ");
	scanf("%s",&c);
	}while(c=='y'||c=='Y');
}