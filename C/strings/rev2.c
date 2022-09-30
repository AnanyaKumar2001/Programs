#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	char c[100];
	int i,j,count=0,temp;
	printf("Enter string : ");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		count++;
	}
	for(i=0;a[i]!='\0';i++)
	{
		c[i]=a[i];
	}
	for(i=0,j=count-1;i<=j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("%s\n",a);
	if(c==a)
		printf("yes");
	else
		printf("no");
}
