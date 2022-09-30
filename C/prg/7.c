
#include <stdio.h>

int main()
{
    int i, j, n;
    int c,s;
   
    printf("Enter rows to print : ");
    scanf("%d", &n);
    
    
    c = 1;
    s = n - 1;
    for(i=1; i<n*2; i++)
    {
        for(j=1; j<=s; j++)
            printf(" ");
        
        for(j=1; j<c; j++)
            printf(" %d", j);
        
        printf("\n");
        
        if(i<n)
        {
            s--;
            c++;
        
 }       else
        {
            s++;
            c--;
        }
    }
    
    return 0;
}