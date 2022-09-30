#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],r[100];
    int i,j,l;
    printf("Enter a String :  ");
    fgets(a,100,stdin);
    
    j=0;
    l=strlen(a);
    for(i=l-1;i>=0;i--)
    {
      r[j++]=a[i];
    }
    r[i]='\0';
    printf("String after Reversing is %s\n",r);


}
