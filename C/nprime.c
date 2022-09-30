#include<stdio.h>
int main()
{
	int n , i=2 , c=1;
	printf("Enter the number : \n");
	scanf("%d",&n);
	while (c<=n)
	{
		int j=2;
		int f=1;
		while (j<i)
		{
			if (i%j==0)
				f=0;
			j=j+1;
		}
		if (f==1);
			printf("%d",&j);
			c=c+1;
		i=i+1;
	}	
	return 0;
}
