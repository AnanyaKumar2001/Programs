#include<stdio.h>
#include<string.h>
int main()
{
	int i,n;
	char a[100],b[100];
	printf("Enter a string:");
	scanf("%s",a);
	printf("Enter the position:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		b[i]=a[i];
	b[i]='\0';
	printf("%s\n",b );
}
