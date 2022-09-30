#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,r,c;
	printf("enter no.of rows:");
	scanf("%d",&r);
	printf("enter no.of coloums:");
	scanf("%d",&c);
	printf("\n");
	printf("Enter elements of first matrix\n");
	printf("\n");
	for (int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("enter element a%d%d:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           	b[j][i]=a[i][j];
     	}
     	
    }
    printf("Transpose of the matrix:\n");

    for(i=0;i<r;i++) 
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

}