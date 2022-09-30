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
		do
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}while(a[i]==' ');

	}


	printf("%s\n",a);
}
