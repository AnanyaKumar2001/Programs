#include <stdio.h>
int main()
{
    int number;
 
    printf("Enter an integer number: ");
    scanf("%d",&number);
 
    if(number<0)
        goto end;
    printf("Number is : %d", number);
 
end:    
    printf("Bye Bye !!!");
    return 0;
}