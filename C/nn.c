#include<stdio.h>
void main()
{
    int a,b,r;
    printf("Enter the values of a: ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    scanf("%d",&r);
    switch(r)
    {
    case 1  :
        printf("Sum of %d and %d is : %d",a,b,a+b);
        break;
    case 2  :
        printf("Difference of %d and %d is : %d",a,b,a-b);
        break;
    case 3  :
        printf("Multiplication of %d and %d is : %d",a,b,a*b);
        break;
    case 4  :
        printf("Division of Two Numbers is %d : ",a/b);
        break;
    }
}