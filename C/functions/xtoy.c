#include<stdio.h>
void calculate_power(int,int);
 
void main() 
{
    int b,e;
    printf("Enter the base\n");
    scanf("%d",&b);
    printf("Enter the exponent\n");
    scanf("%d",&e);
    calculate_power(b,e);
}
 
void calculate_power(int b,int e)
{
    int power=1;
    float c;
    if(e==0)
        printf("The power is 1");
    else if(e>0)
    {
        while(e>0)
        {
            power=power*b;
            e--;
        }
        printf("The power of the no = %d",power);
    }
    else
    {    
        while(e<0)
        {
            power=power*b;
            e++;
        }
        c=1.0/power;
        printf("The power %f",c );
    }    
}