#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float det,r1,r2,m,n;
	n=0.0001;
	printf("Enter a,b,c values\n");
	scanf("%d%d%d",&a,&b,&c);
	det=(b*b)-(4*a*c);
	if(det==0)
	{
		r1=-b/(2*a);
		printf("%f\n",r1);
	}
	else if(det<0)
	{
		printf("roots are imaginary\n");
	}
	else
	{

		r1=(-b+sqrt(det)/(2*a));
		r2=(-b-sqrt(det)/(2*a));
		printf("r1=%.2f,r2=%.2f\n",r1,r2);
	}
}