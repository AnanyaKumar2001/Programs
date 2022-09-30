#include<stdio.h>
struct xyz
{
	char first[100];
	char sn[100];
};
struct student
{
	struct xyz name;
	char id[10];
	char ss;
	int m,et,edc,pds,sno;
	float t,p;
	char g;

}s[10];

int main()
{
	int i,n,m,e;
	float sum,p;
    printf("Enter information of students:\n");
    printf("Enter number of students : ");
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s[i].sno=i+1;
		printf("Enter name :  ");
		scanf("%s",s[i].name.first);
		printf("Enter sirname :  ");
		scanf("%s",s[i].name.sn);
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

	for(i=0;i<n;i++)
	{
		sum=s[i].m+s[i].et+s[i].edc+s[i].pds;
		s[i].p=(sum/80.0)*100;
		if(sum>=70)
			s[i].g='A';
		else if(sum>=60)
			s[i].g='B';
		else if(sum>=50)
			s[i].g='C';
		else if(sum>=40)
			s[i].g='D';
		else
			s[i].g='F';
	}

	for(i=1;i<=n;i++)
	{
		printf("Name : %s\n",s[i].name.first);
		printf(" Sirname  : %s\n",s[i].name.sn);
		printf("Id : %s\n",s[i].id);
		printf("Section : %s\n",&s[i].ss);
		printf("MATHS marks : %d\n",s[i].m);
		printf("ET marks : %d\n",s[i].et);	
		printf("EDC marks : %d\n",s[i].edc);
		printf("PDS marks : %d\n",s[i].pds);
		s[i].t=s[i].m+s[i].et+s[i].edc+s[i].pds;
		printf("The total marks is %d\n",s[i].m+s[i].et+s[i].edc+s[i].pds);
	}
	printf("Enter the index to edit the details:");
	scanf("%d",&e);
	s[e].sno=i+1;
	scanf("%s",s[e].name.first);
	scanf("%s",s[e].name.sn);
	scanf("%s",s[e].id);
	scanf("%d",&s[e].m);
	scanf("%d",&s[e].et);
	scanf("%d",&s[e].edc);
	scanf("%d",&s[e].pds);
	s[i].t=s[i].m+s[i].et+s[i].edc+s[i].pds;
	s[i].p=(s[i].t/60)*100;
	printf("The percentage is %f\n",s[i].p);
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("Name : %s\n",s[i].name.first);
		printf(" Sirname  : %s\n",s[i].name.sn);
		printf("Id : %s\n",s[i].id);
		printf("Section : %s\n",&s[i].ss);
		printf("MATHS marks : %d\n",s[i].m);
		printf("ET marks : %d\n",s[i].et);	
		printf("EDC marks : %d\n",s[i].edc);
		printf("PDS marks : %d\n",s[i].pds);
		printf("Percentage :%f\n",s[i].p);
		printf("Grade : %c\n",s[i].g);
	}
}