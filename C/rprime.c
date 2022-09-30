#include<stdio.h>
 int main()
 {
   int i, j,upper,lower, n;
   printf("Enter the lower limit : ");
   scanf("%d", &lower);
   printf("Enter the upper limit: ");
   scanf("%d", &upper);
   for(n=lower; n<=upper; n++)
   {
     j = 1;
     for(i=2; i<n; i++)
       if(n%i == 0)
       {
         j = 0;
         break;
       }
     if(j==1)
       printf("\t%d", n);
   }
 }