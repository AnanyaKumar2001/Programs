#include<stdio.h>
int main()
{
	char a[100],c[100];
	int i=0,j=0,k;
	printf("Enter full form\n");
	fgets(a,100,stdin);
	c[0]=a[0];
	j=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			if(a[i+1]>='A'&&a[i+1]<='Z')
			{
				c[++j]=a[i+1];
			}
		}
	
	}
	printf("%s\n",c);

}

