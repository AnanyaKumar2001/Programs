#include <stdio.h>
int main()
{
    int n, a=0,b=1,temp=0,i=2;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d\t%d\t",a,b);
    while(i<n)
    {
        temp=a+b;
        printf("%d\t",temp);
        a=b;
        b=temp;
        i=i+1;
    }
}
