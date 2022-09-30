#include <stdio.h>
int main()

{

    int n,i,j,count = 1;
    printf("Enter number of rows\n");
    scanf("%d", &n);

    count=n-1;

    for(i=1;i<=n;i++)

    {

        for(j=1;j<=count;j++)

            printf(" ");

        count--;

        for(j=1;j<=2*i-1;j++)

            printf("%d",i);

        printf("\n");

     }

     count=1;

     for(i=n-1;i >0;i--)

     {

         for(j=1;j<=count;j++)

             printf(" ");

         count++;

         for(j=1;j<2*i;j++)

             printf("%d",i);

         printf("\n");

      }

      return 0;

}