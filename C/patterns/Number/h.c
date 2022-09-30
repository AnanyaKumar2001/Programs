#include<stdio.h>
int main()
{
  int i,j,k,n;
  printf("enter the value:");
  scanf("%d",&n);
  k=1;
  for(i=1;i<=n;i+=2)
  {
    for(j=n;j>=1;j--)
    {
      if(j>i)
        printf(" ");
      else
        printf("%d ",k++);
    }
    printf("\n");
  }
  return 0;
}
