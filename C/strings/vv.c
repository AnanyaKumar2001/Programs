#include<stdio.h>
void main()
{
	int n,i;
	char a[20];
	printf("Enter number of characters : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter a letter : ");
		scanf("%c",a);
	}
	for(i=0;i<n;i++)
	{
		printf("%c\n",a[i]);
	}

}
