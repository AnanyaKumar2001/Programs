#include <stdio.h>
int main()
{
  int i;
  char a[100];
     
  printf("Enter a string  \n");
  fgets(a,100,stdin);
  for(i=0;a[i]!='\0';i++)
  {
            if (a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' || a[i] == 'i' || a[i] == 'I' || a[i] =='o' || a[i] =='O' || a[i] == 'u' || a[i] == 'U')
                  printf("Yes it contains a vowel and the vowel is %c\n",a[i]);
           
  }
  
        
}