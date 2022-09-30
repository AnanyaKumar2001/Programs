#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int i,j;
	printf("Enter a string1\n");
	fgets(s1,100,stdin);
	printf("Enter string2\n");
	fgets(s2,100,stdin);
	for(i=strlen(s1),j=0;s2[i]!='\0';i++,j++)
	{
		s1[i]=s2[j];
	}
	s1[i]='\0';
	printf("%s\n",s1);
	
}
