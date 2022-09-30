#include<stdio.h>
struct student
{
	char n[100];
	char id[10];
	char ss;
	int m,et,edc,pds;
	float t,p;
	char g;

}s[10];

int main()
{
	int i,n,t,p;
    printf("Enter information of students:\n");
    printf("Enter number of students : ");
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter name :  ");
		scanf("%s",s[i].n);
		printf("Enter id : ");
		scanf("%s",s[i].id);
		printf("Enter section : ");
		scanf("%s",&s[i].ss);
		printf("Enter MATHS marks : ");
		scanf("%d",&s[i].m);
		printf("Enter ET marks : ");
		scanf("%d",&s[i].et);
		printf("Enter EDC marks : ");
		scanf("%d",&s[i].edc);
		printf("Enter PDS marks : ");
		scanf("%d",&s[i].pds);
	}
	for(i=1;i<=n;i++)
	{
		printf("Name : %s\n",s[i].n);
		printf("Id : %s\n",s[i].id);
		printf("Section : %s\n",&s[i].ss);
		printf("MATHS marks : %d\n",s[i].m);
		printf("ET marks : %d\n",s[i].et);	
		printf("EDC marks : %d\n",s[i].edc);
		printf("PDS marks : %d\n",s[i].pds);
		s[i].t=s[i].m+s[i].et+s[i].edc+s[i].pds;
		printf("The total marks is %d\n",s[i].m+s[i].et+s[i].edc+s[i].pds);

		if(s[i].t>=50 && s[i].t<=60)
		{
			printf("The grade is A\n");
		}
		else if(50>s[i].t>=40)
		{
			printf("The grade is B\n");
		}
		else if(40>s[i].t>=30)
		{
			printf("The grade is C\n");
		}
		else
		{
			printf("Fail\n");
		}

		s[i].p=(s[i].t/60)*100;
		printf("The percentage is %f\n",s[i].p);
		printf("\n");
	}




}