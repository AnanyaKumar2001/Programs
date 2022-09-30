#include<stdio.h>
int main()
{
	int i,j,n,c=1,s=1;
	printf("Enter rows to print :  ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",j+64 );
		}
		printf("\n");
	}

}
