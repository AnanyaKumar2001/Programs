/*
5

    1
   12
  123
 1234
12345
 2345
  345
   45
    5
     

*/
#include<stdio.h>
int main()
{
	int n,i,j,k,z;
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
		}
		printf("\n");
	}
		

	for(i=1;i<=n;i++)
	{
		for(j=n-i;j<n;j++)
		{
			printf(" ");

		}
		for(k=i+1;k<=n;k++)
		{
			printf("%d",k);
		}
		printf("\n");
		
	}
}