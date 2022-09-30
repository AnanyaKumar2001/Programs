#include<stdio.h>
#include<math.h>
int qe()
{
	int a,b,c;
	float det,r1,r2,m,n,p;
	n=0.0001;
	det=(b*b)-(4*a*c);
	printf("det is %f\n",det);
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
		for(m=0;m<det;m=m+n)
		{
			if((m*m)>det)
  			{
   				m=m-n;         // This if() is used to calculate the final value as soon as the square of the number exceeds
   				break;      //  the number then we deduct the value exceeded and stop the procedure using break; this is our final value which is stored in m;
  			}              
 		}
 		printf("%f",m);


	}
}
int main()
{
	int a,b,c;
	float det,r1,r2,m,n,p;
	printf("Enter a,b,c values\n");
	scanf("%d%d%d",&a,&b,&c);
	qe();
	r1=(-b+(m/(2*a)));
	r2=(-b-(m/(2*a)));
	printf("r1=%.2f,r2=%.2f\n",r1,r2);

}