#include<stdio.h>	
struct xyz 
{
	char first[100];
	char sur[100];
};	
struct abc
{
	struct xyz name;
	char id[10];
	int sno;
	int sub1,sub2,sub3,sub4;
	float per;
	char grade;
}s1[100];
int main()
{
	int i,n,m;
	float sum;
	printf("Enter no.of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		s1[i].sno=i+1;
		scanf("%s",s1[i].name.first);
		scanf("%s",s1[i].name.sur);
		scanf("%s",s1[i].id);
		scanf("%d",&s1[i].sub1);
		scanf("%d",&s1[i].sub2);
		scanf("%d",&s1[i].sub3);
		scanf("%d",&s1[i].sub4);
	}
	for(i=0;i<n;i++)
	{
		sum=s1[i].sub1+s1[i].sub2+s1[i].sub3+s1[i].sub4;
		s1[i].per=(sum/80)*100;
		if(sum>=70){
			s1[i].grade='A';
		}
		else if(sum>=60)
			s1[i].grade='B';
		else if(sum>=50)
			s1[i].grade='C';
		else if(sum>=40)
			s1[i].grade='D';
		else
			s1[i].grade='F';
	}
	for(i=0;i<n;i++)
	{
	printf("data of student number:%d\n",s1[i].sno);
	printf("%s\n",s1[i].name.first);
	printf("%s\n",s1[i].name.sur);
	printf("%s\n",s1[i].id );
	printf("%d\n",s1[i].sub1);
	printf("%d\n",s1[i].sub2);
	printf("%d\n",s1[i].sub3);
	printf("%d\n",s1[i].sub4);
	printf("%f\n",s1[i].per);
	printf("%c\n",s1[i].grade);
	}
	printf("Enter the index to edit the details:");
	scanf("%d",&m);
	s1[m].sno=i+1;
	scanf("%s",s1[m].name.first);
	scanf("%s",s1[m].name.sur);
	scanf("%s",s1[m].id);
	scanf("%d",&s1[m].sub1);
	scanf("%d",&s1[m].sub2);
	scanf("%d",&s1[m].sub3);
	scanf("%d",&s1[m].sub4);
	sum=s1[m].sub1+s1[m].sub2+s1[m].sub3+s1[m].sub4;
	s1[m].per=(sum/80.0)*100;
	for(i=0;i<n;i++)
	{
		printf("%d\n",s1[i].sno);
		printf("%s\n",s1[i].name.first);
		printf("%s\n",s1[i].name.sur);
		/*printf("%s\n",s1[i].name);*/
		printf("%s\n",s1[i].id );
		printf("%d\n",s1[i].sub1);
		printf("%d\n",s1[i].sub2);
		printf("%d\n",s1[i].sub3);
		printf("%d\n",s1[i].sub4);
		printf("%f\n",s1[i].per);
		printf("%c\n",s1[i].grade);
	}
}






































