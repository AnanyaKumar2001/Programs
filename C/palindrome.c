#include <stdio.h>
int main()
{
    int n, sum=0, r=0, i=1,c;
    printf("Enter a number: ");
    scanf("%d", &n);
    c=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if (c==sum)
        printf("It is a palindrome.");
    else
        printf("It is not a palindrome.");
    return 0;
}