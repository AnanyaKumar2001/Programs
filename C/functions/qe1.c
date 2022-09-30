#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,x1,x2;
    int ch;
    //clrscr();
    printf("Enter a,b,c values");
    scanf("%f%f%f",&a,&b,&c);
    d=pow(b,2)-4*a*c;
    if(d==0)
        ch=1;
    else if(d>0)
    {
        ch=2;
    }
    else
        ch=3;
    printf("A=%6.2f\nB=%6.2f\nC=%6.2f\n",a,b,c);
    printf("Discriminate D=%6.2f\n",d);
    switch(ch)
    {
    case 1:
        printf("Equal Roots");
        x1=x2=-b/(2*a);
        printf("x1=x2=%6.2f\n",x1);
        break;
    case 2:
        printf("Roots are Real and inequal");
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("x1=%6.2f\n",x1);
        printf("x2=%6.2f\n",x2);
        break;
    case 3:
        printf("Imaginary roots \n");
        printf("x1=%6.2f+i%6.2f\n",-b/(2*a), sqrt(-d)/(2*a));
        printf("x2=%6.2f-i%6.2f\n",-b/(2*a), sqrt(-d)/(2*a));
        break;
    }

}