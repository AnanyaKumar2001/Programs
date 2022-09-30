#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int i,c;
	printf("Enter a string1\n");
	fgets(s1,100,stdin);
	printf("Enter string2\n");
	fgets(s2,100,stdin);
	if(strlen(s1)!=strlen(s2))
	{
		printf("Unequal\n");

	}
	else
	{
		for(i=0;s1[i]!='\0';i++)
		{
			if(s1[i]<s2[i])
			{
				printf("s1 is less\n");
				break;
			}
			
			else if(s1[i]>s2[i])
			{
				printf("s1 is big\n");
				break;
			}

			else
			{
				c++;
			}
		}
		if(c==strlen(s1))
			printf("Equal\n");
	}

}