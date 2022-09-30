#include<stdio.h>
#include<string.h>
void main()
{
	int i,j=0,k=0,count=0;
	char a[100],b[100];
	char c[100][100];
	printf("Enter a text:");
	fgets(a,100,stdin);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			c[k][j]='\0';
			k++;
			j=0;
		}
		else
		{
			c[k][j]=a[i];
			j++;
		}
	}
	c[k][j]='\0';
	printf("Enter astrinf to delete:");
	scanf("%s",b);
	for(i=0;i<k+1;i++)
	{
		if(strcmp(c[i],b)==0)
		{
			for(j=i;j<k+1;j++)
			{
				strcpy(c[j],c[j+1]);
			}
			k--;
		}
	}
	for(i=0;i<k+1;i++)
		printf("%s",c[i] );
}