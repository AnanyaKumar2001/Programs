#include <stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100],c[100],ch;
	printf("Enter the first string:");
	scanf("%s",a);
	printf("Enter the second string:");
	scanf("%s",b);
	printf("Length of array a is %ld\n",strlen(a));
	printf("Copying array a into c %s \n",strcpy(c,a));
	printf("Compare two arrays %d\n",strcmp(a,b));
	printf("Concatenation of string is %s\n",strcat(a,b));
	printf("Enter a character:");
	scanf("%s",&ch);
	printf("Print from first in a %s \n",strchr(b,ch));
	printf("Print from last %s \n",strrchr(b,ch));
}