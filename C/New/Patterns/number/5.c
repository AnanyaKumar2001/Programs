/*
5

55555
 4444
  333
   22
    1

*/
#include<stdio.h>
int main()
{
    int i,n,k,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
    	for(j=n;j>i;j--)
    	{
    		printf(" ");
    	}
    	for(k=1;k<=j;k++)
    	{
    		printf("%d",i);
    	}
    	j--;
    	printf("\n");
    }
}