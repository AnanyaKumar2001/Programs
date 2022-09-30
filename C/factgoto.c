#include<stdio.h>
int main()
{
	int n,i,f=1;
	printf("Enetr a number : ");
	scanf("%d",&i);
	
	loop:if(i>0)
	{
		f=f*i;
   		i=i-1;
		goto loop;

	}
		
	printf("%d",f);


}