#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n;
	char a[100],b[100];
	printf("Enter a string:");
	scanf("%s",a);
	printf("Enter the position:");
	scanf("%d",&n);
	for(i=n,j=0;a[i]!=0;i++,j++)
		b[j]=a[i];
	b[j]='\0';
	printf("%s\n",b );

}
