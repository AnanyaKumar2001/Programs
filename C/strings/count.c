#include <stdio.h>
#include <string.h>
void main()
{
   char a[100];
   int i=0,c=0,w=1;
   printf("Enter any string\n");
   fgets(a,100,stdin);
   for(i=0; a[i]!='\0'; i++)
   {
      c++;
   }
   printf("The number of characters in the string are %d\n", c);
   for(i=0; i<=c-1; i++)
   {
      if(a[i] == ' ')
      {
         w++;
      }
   }
   printf("The number of words in the string are %d", w);
   
}