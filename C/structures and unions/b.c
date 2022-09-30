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
		printf("enter the name:");
		scanf("%s",s1[i].name.first);
		printf("enter the sur name:");
		scanf("%s",s1[i].name.sur);
		printf("enter the id number:");
		scanf("%s",s1[i].id);
		printf("enter the subject 1 marks:");
		scanf("%d",&s1[i].sub1);
		printf("enter the subject 2 marks:");
		scanf("%d",&s1[i].sub2);
		printf("enter the subject 3 marks:");
		scanf("%d",&s1[i].sub3);
		printf("enter the subject 4 marks:");
		scanf("%d",&s1[i].sub4);
	}
	for(i=0;i<n;i++)
	{
		sum=s1[i].sub1+s1[i].sub2+s1[i].sub3+s1[i].sub4;
		s1[i].per=(sum/80)*100;
		if(sum>=70){
			s1[i].grade='A';
		}
		else if(sum>=60&&sum<=69)
			s1[i].grade='B';
		else if(sum>=50&&sum<=59)
			s1[i].grade='C';
		else if(sum>=40&&sum<=49)
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
	printf("the percentage is: %f\n",s1[i].per);
	printf("the grade is: %c\n",s1[i].grade);
	}
	printf("Enter the index to edit the details:");
	scanf("%d",&m);	
	s1[i].sno=i+1;
	printf("enter the name:");
	scanf("%s",s1[i].name.first);
	printf("enter the sur name:");
	scanf("%s",s1[i].name.sur);
	printf("enter the id number:");
	scanf("%s",s1[i].id);
	printf("enter the subject 1 marks:");
	scanf("%d",&s1[i].sub1);
	printf("enter the subject 2 marks:");
	scanf("%d",&s1[i].sub2);
	printf("enter the subject 3 marks:");
	scanf("%d",&s1[i].sub3);
	printf("enter the subject 4 marks:");
	scanf("%d",&s1[i].sub4);
	sum=s1[m].sub1+s1[m].sub2+s1[m].sub3+s1[m].sub4;
	s1[m].per=(sum/80.0)*100;
	for(i=0;i<n;i++)
	{
		printf("%d\n",s1[i].sno);
		printf("%s\n",s1[i].name.first);
		printf("%s\n",s1[i].name.sur);
		printf("%s\n",s1[i].id );
		printf("%d\n",s1[i].sub1);
		printf("%d\n",s1[i].sub2);
		printf("%d\n",s1[i].sub3);
		printf("%d\n",s1[i].sub4);
		printf("the percentage is: %f\n",s1[i].per);
		printf("the grade is: %c\n",s1[i].grade);
	}
}






































