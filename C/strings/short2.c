#include<stdio.h>
int main()
{
	char a[100],s[100],c[100];
	int i,j=0,k;
	printf("Enter full form : ");
	fgets(a,100,stdin);
	j=0;
	for(i=1;a[i]!='\0';i++)
	{
		
		if(a[i]==' ')
		{
			c[j]=a[i+1];
			j++;
		}
		c[0]=a[0];
		c[i]='\0';		
	}
	printf("%s\n",c);

}