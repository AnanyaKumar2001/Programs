#include<stdio.h>
void main()
{
    int n,m,r;
    char ar,lg,bt,rl;
    printf("Enter the values of a: ");
    scanf("%d",&n);
    printf("Enter b : ");
    scanf("%d",&m);
    printf(" 1.Arithmetic\n 2.logical\n 3.Bitwise\n 4.Relational\n");
    scanf("%d",&r);
    printf(" +.Addition\n -.Subtraction\n *.Multiplication\n /.Division\n %.modulus\n");
    scanf("%c",&ar);
    printf(" a.logical and\no.logical or\n");
    scanf("%c",&lg);
    printf(" &.bitwise and\n|.bitwise or\n^.bitwise xor\nl.bitwise left shift\nr.bitwise rightshift\n~.bitwise negation for first number\n`.bitwise negation for second number\n");
    scanf("%c",&bt);
    printf(" >.relational greater than\n<.relational less than\nG.relational greater than or equal to\nLrelational less than or equal to\ne.relational equal to\n");
    scanf("%c",&rl);
    ar=getchar();
    lg=getchar();
    bt=getchar();
    rl=getchar();
    switch(r)
    {
    case 1 :
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

        }
    case 2 :
        switch(lg)
        {
        case 'a' :
            printf("The logical and is %d\n",n&&m);
            break;
        case 'o' :
            printf("The logical or is %d\n",n||m); 
            break; 
        }
    case 3 :
        switch(bt)
        {
        case '&' :
            printf("The bitwise and is %d\n",n&m);
            break;
        case '|' :
            printf("The bitwise or is %d\n",n|m);
            break;
        case '^' :
            printf("The bitwise xor is %d\n",n^m);
            break;
        case 'l' :
            printf("The bitwise leftshift is %d\n",n<<m);
            break;
        case 'r' :
            printf("The bitwise rightshift is %d\n",n>>m);
            break;
        case '~' :
            printf("The bitwise negation of n is %d\n",~n);
            break;
        case '`' :
            printf("The bitwise negation of m is %d\n",~m);
            break;
        }
    case 4 :
        switch(rl)
        {
        case '>' :
            printf("The relational greater than is %d\n",n>m);
            break;
        case '<' :
            printf("The relational less tham is %d\n",n<m);
            break;
        case 'G' :
            printf("The relational greater than or equal to  is %d\n",n>=m);
            break;
        case 'L' :
            printf("The relational less than or equal to is %d\n",n<=m);
            break;
        case 'e' :
            printf("The relational equal is %d\n",n==m);
            break;
        }
    }
}