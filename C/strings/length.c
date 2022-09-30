#include<stdio.h>
#include<string.h>
int main()
{
  char a[100];
  int count=0;
  printf("Enter a string : ");
  fgets(a,100,stdin);
  for(int i=0;a[i]!='\0';i++)
  {
    count++;  
  }
  printf("The length of the given string is %d\n",count);
}