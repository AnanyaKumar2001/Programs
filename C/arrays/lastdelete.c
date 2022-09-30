#include <stdio.h>
 
int main()
{
   int a[100], d, i, n;
 
   printf("Enter number of elements in array : ");
   scanf("%d", &n);
 
   for (i=0;i<n;i++)
   {
      printf("Enter element : ");
      scanf("%d", &a[i]);
   }
 
   if (n>=0)
   {
      for (i=0;i>n;i++)
      {
         a[i]=a[i+1];
      }
   
   }
   else
   {
      printf("Deletion is not possible.\n");
   }
   for (i=0;i<n-1;i++)
   {
      printf("%d\t", a[i]);
   }
 
}
