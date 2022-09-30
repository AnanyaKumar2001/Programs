/*
6 
               1
             1   1
           1   2   1
         1   3   3   1
       1   4   6   4   1
     1   5  10  10   5   1


*/
#include <stdio.h>

/*
int main()
{
    int r,c=1,s,i,j;
    scanf("%d",&r);

    for(i=0;i<r;i++)
    {
        for(s=1;s<=r-i;s++)
            printf("  ");

        for(j=0;j<=i;j++)
        {
            if(j==0 || i==0)
                c=1;
            else
                c=c*(i-j+1)/j;

            printf("%4d",c);
        }
        printf("\n");
    }
    
}

*/
int main()
{
	int i,j,k,n,c=1;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			if(k==0 || i==0)
				c=1;
			else
				c=c*(i-j+1)/j;
			printf("%4d",c);

		}
		printf("\n");
	}
}