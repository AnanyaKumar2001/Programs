#include<stdio.h>
int main()
{
	union student
	{
		char n[100];
		char id[10];
		char ss;

	}s;
	printf("Enter name :  ");
	scanf("%s",s.n);
	printf("Enter id : ");
	scanf("%s",s.id);
	printf("Enter section : ");
	scanf("%s",&s.ss);
}