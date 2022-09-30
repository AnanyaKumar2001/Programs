#include<stdio.h>
void main()
{
	int x[4][4]={{2,3,6,6},{4,5,6,7},{6,8,5,3},{8,1,4,3}};
	for(int i=0;i<4;i++)
	{	
		printf("\n");
		for(int j=0;j<4;j++)
		{
			printf("%d",x[i][j]);
		}
	
	}
}