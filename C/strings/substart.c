#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int i,n;
	printf("Enter text\n");
	fgets(s1,100,stdin);
	printf("Enter string to extract\n");
	fgets(s2,100,stdin);
	n=strlen(s1);
	for(i=0;i<=n;i++)
	{
		s2[i]=s1[i];
	}
	s2[i]='\0';
	printf("%s\n",s2);

}