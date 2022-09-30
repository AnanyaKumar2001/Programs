#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("Enetr a number : ");
	scanf("%d",&n);
	
	natural:if(i<=n)
	{
		sum=sum+i;
   		i=i+1;
		goto natural;

	}
		
	printf("%d",sum);


}