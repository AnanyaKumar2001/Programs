#include<stdio.h>
int main() 
{
   int a[20],i,j,k,n;
 
   printf("Enter no.of elements: ");
   scanf("%d",&n);

   for(i=0;i<n;i++)
   {
      printf("Enter element : ");
      scanf("%d",&a[i]);
   }

   for(i=0;i<n;i++) 
   {
      for(j=i+1;j<n;j++) 
      {
         if(a[j]==a[i]) 
         {
            for(k=j;k<n;k++) 
            {
               a[k]=a[k+1];
            }
            n--;
         } 
      }
   }
 
   for(i=0;i<n;i++) 
   {
      printf("%d\t",a[i]);
   }
 

}
