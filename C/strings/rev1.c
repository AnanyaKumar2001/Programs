#include <stdio.h>
#include <string.h>
 
int main()
{
    char a[100],temp;
    int i,j,n;
    printf("Enter a String :  ");
    fgets(a,100,stdin);
    
    i=0;
    n=strlen(a);
    for(i=0,j=n-1;i<=j;i++,j--)
    {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }

}