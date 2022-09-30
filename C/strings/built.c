#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100],s3[100];
	char ch;
	printf("Enter string1\n");
	scanf("%s",s1);
	printf("Enter string2\n");
	scanf("%s",s2);


	printf("The length of the string1 is %ld\n",strlen(s1));
	printf("The comparision of strings is %d\n",strcmp(s1,s2));
	printf("The copy of the string is %s\n",strcpy(s3,s1));
	printf("The concatanation of strings is %s\n",strcat(s1,s2));

	printf("Enter a character\n");
	scanf("%s",&ch);
	printf("The chr of the string is %s\n",strchr(s2,ch));
	printf("The rchr of the strinc is %s\n",strrchr(s2,ch));

}
