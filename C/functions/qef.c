#include<stdio.h>
#include<math.h>
int quadratic(float x,float y,float z)
{
	int a,b,c,*ap,*bp,*cp;
	float det,r1,r2,m,n;
	*ap = &a;
	*bp = &b;
	*cp = &c;
	det=(*bp * *bp)-(4 * *ap * *cp);
	if(det==0)
	{
		printf("r1=r2=%f\n",-*bp/(2 * *ap));
	}
	else if(det<0)
	{
		printf("roots are imaginary\n");
	}
	else
	{

		r1=(-*bp+sqrt(det)/(2 * *ap));
		r2=(-*bp-sqrt(det)/(2 * *ap));
		printf("r1=r2=%f\n",r1,r2);
	}
}
int main()
{
	int a,b,c,*ap,*bp,*cp;
	float det,r1,r2,m,n;
	printf("Enter a,b,c values\n");
	scanf("%d%d%d",&a,&b,&c);
	quadratic(&a,&b,&c);
}