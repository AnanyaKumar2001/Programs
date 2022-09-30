#include<stdio.h>
void main()
{
	int x[20][20],i,j,k,l,m,n;
	printf("Enter number of rows :  ");
	scanf("%d",&m);
	printf("Enter number of columns : ");
	scanf("%d",&n);
	for(int i=0;i<m;i++)
	{	
	
		for(int j=0;j<n;j++)
		{
			printf("Enter  element : ");
			scanf("%d",&k);
			printf("\n");
			
			printf("%d",x[i][j]);
		}
	
	}

}