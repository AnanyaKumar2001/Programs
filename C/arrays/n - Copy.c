#include<stdio.h>
void main()
{
	char a,b,c,d,e,f;
	printf("Enter any letters\n");
	scanf("%c\n",&a);
	scanf("%c\n",&b);
	scanf("%c\n",&c);
	scanf("%c\n",&d);
	scanf("%c\n",&e);
	char x[5]={a,b,c,d,e};
	for(int i=0;i<5;i++)
	{	
		printf("%c",x[i]);
	}
}