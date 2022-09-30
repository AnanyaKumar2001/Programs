#include<stdio.h>
void main()
{
    int n,m,r;
    char ar;
    printf("Enter the values of a: ");
    scanf("%d",&n);
    printf("Enter b : ");
    scanf("%d",&m);
    printf(" 1.Arithmetic\n 2.logical\n 3.Bitwise\n 4.Relational\n");
    scanf("%d",&r);
    ar=getchar();
    switch(r)
    {
    case 1 :
        printf(" +.Addition\n -.Subtraction\n *.Multiplication\n /.Division\n %.modulus\n");
        scanf("%c",&ar);
        switch(ar)
        {
        case '+'  :
            printf("Sum of %d and %d is : %d",n,m,n+m);
            break;
        case '-'  :
            printf("Difference of %d and %d is : %d",n,m,n-m);
            break;
        case '*'  :
            printf("Multiplication of %d and %d is : %d",n,m,n*m);
            break;
        case '/'  :
            printf("Division of Two Numbers is : %d",n/m);
            break;
        case '%'  :
            printf("Modulus of Two Numbers is : %d",n%m);
            break;
        break;

        }
    case 2 :
       break;
    }
}