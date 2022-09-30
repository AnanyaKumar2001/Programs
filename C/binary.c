#include <stdio.h>
 
int main(void) 
{
    int n,j=0,k;
    printf("Enter a number:");
    scanf("%d",&n);
    
    while(n>0)
    {
        j=n%10;
 
        if((j!=0)&&(j!=1))
        {
           printf("The given number is not binary");
           break;
        }
        n/=10;
 
        if(n==0)
        {
            printf("The given number  is binary");
        }
    }
    return 0;
}