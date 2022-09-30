#include<string.h>
#include<stdio.h>
void main()
{
	int i,j,k,chr;
	char a[100],b[100],c[200];
	printf("enter characters:");
	scanf("%s",a);
	printf("enter charecters of b:");
	scanf("%s",b);
	printf("len of string a:%ld\n",strlen(a));
	printf("len of string b:%ld\n",strlen(b));
	printf("concatenation of a,b:%s\n",strcat(a,b));
	printf("copy :%s\n",strcpy(c,a));
	printf("cmp of a and b:%d\n",strcmp(a,b));
	printf("left to right:%s\n",strchr(a,chr));
	printf("right to left:%s\n",strrchr(a,chr));
}

