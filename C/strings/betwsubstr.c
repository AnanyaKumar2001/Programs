#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,m,n;
	char a[100],b[100];
	printf("Enter a string:");
	scanf("%s",a);
	printf("Enter the first position:");
	scanf("%d",&m);
	printf("Enter the last position:");
	scanf("%d",&n);

	for(i=m,j=0;i<=n;i++,j++)
		b[j]=a[i];
	b[j]='\0';
	printf("%s\n",b );
}
