#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,j,count=0,temp;
	printf("Enter string : ");
	fgets(a,100,stdin);
	for(i=0;a[i]!='\0';i++)
	{
		count++;
	}
	for(i=0;a[i]!='\0';i++)
	{
			if (a[i]==' ')
			{
				for(i=0,j=count-1;i<=j;i++,j--)
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
	}


	printf("%s\n",a);
}