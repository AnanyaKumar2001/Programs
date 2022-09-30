/*
5

    1
   222
  33333
 4444444
555555555
 1111111
  22222
   333
    4

*/
#include<stdio.h>
int main()
{
	int i,j,n,c=1,s=1;
	scanf("%d",&n);
	s=n-1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=s;j++)
		{
			printf(" ");
			
		}
		s--;
		for(j=1;j<=2*i-1;j++)
		{
			printf("%d",i);
		}
		printf("\n");



	}
	s=1;
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=s;j++)
		{
			printf(" ");
		}
		s++;
		for(j=1;j<=2*(n-i)-1;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}


}