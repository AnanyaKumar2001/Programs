#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,k,count;
	char n,l,a[100],b[50];
	printf("Enter your sentence : ");
	scanf("%s",&a[i]);
	printf("Enter a word to search : ");
	scanf("%s",&b[j]);
	for(i=0;a[i]!='\0';i++)
	{
		count=1;
		for(j=0,k=i;b[j]!='\0';j++,k++)
		{
			if(a[i]==b[j])
			{
				count=0;
				break;
			}
			
		}
		if(count==1)
		{
			printf("Found\n");
		}
		
	}

}