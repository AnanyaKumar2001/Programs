#include <stdio.h>
int main()
{
    int n, a=0, r;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>0)
    {
        r=n%10;
        a=a+r*r;
        n/=10;
    }
    printf("The sum of squares of digits of a given number is  %d\n",a);
}