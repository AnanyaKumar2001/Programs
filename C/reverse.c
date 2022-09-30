#include <stdio.h>
int main()
{
    int n, a=0, r;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>0)
    {
        r=n%10;
        a=a*10 + r;
        n/=10;
    }
    printf("The reverse of a given number is  %d\n",a);
}