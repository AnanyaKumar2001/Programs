#include <stdio.h>
int main()
{
    int n,m,r,x = 0;

    printf("Enter a number : ");
    scanf("%d", &n);
    m = n;
    while (m!= 0)
    {
        r = m%10;
        x+= (r*r*r);
        m/= 10;
    }

    if(x==n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);

    return 0;
}