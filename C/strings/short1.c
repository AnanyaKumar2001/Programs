#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],s[100],c[100];
	int i,j=0,k;
	printf("Enter full form : ");
	fgets(a,100,stdin);
	for(i=0,j=0;a[i]!='\0';i++,j++)
	{
		if(a[i]==' ')
		{
			for(j=i;j<=strlen(a);j++)
			{
				printf("%c\n",a[j]);
			}
		}
		i++;

	}



}