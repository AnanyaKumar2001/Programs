#include<stdio.h>
void power();
int main()
{
	int x,y;
	power();

}
void power()
{
	int x,y,p=1;
	float c;
	printf("Enter x : ");
	scanf("%d",&x);
	printf("Enter y : ");
	scanf("%d",&y);
	if(y==0)
	{
		printf("x power y is %d\n",p);
		return;
	}
	else if(y>0)
	{
		for(int i=1;i<=y;i++)
		{
			p*=x;
		}
		printf("x power y is %d\n",p);
	}
	else
	{
		for(int i=y;i<0;i++)
		{

			p=p*x;
		}
		c=1.0/p;
		printf("x power y is %f\n",c);
	}

	
	
}
