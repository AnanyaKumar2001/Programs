#include<stdio.h>
int main()
{
  int num;
  printf("\nEnter a number ");
  scanf("%d",&num);
  if(num%3==0)
  {
    if(num%5==0)
    {
      printf("\nThe number %d is divisible by 3 and 5",num);
    }
    else
    {
      printf("\nThe number %d is divisible by 3 but not by 5",num);
    }
  }
  else
  {
    printf("\nThe number %d is niether divisible by 3 nor by 5",num);
  }
}