#include <stdio.h>
#include <string.h>
 
int main()
{
	char a[100];
	char b[100];
	char c[100];
	int p=0,r=0,i=0;
	int t=0;
	int x,g,s,n,m;

 
	puts("Enter your text :");
	fgets(a,100,stdin);
	puts("Enter Second String:");
	fgets(b,100,stdin);
	printf("Enter the position where the item has to be inserted: ");
	scanf("%d",&p);
	r = strlen(a);
	n = strlen(b);
	i=0;
	while(i <= r)
	{
		c[i]=a[i];
		i++;
	}
	s = n+r;
	m = p+n;
	 

	for(i=p;i<s;i++)
	{
		if(t<n)
		{
		  a[i] = b[t];
		  t=t+1;
		}
	 	a[m]=c[i];
	 	m++;
	}
	 
	printf("%s", a);
}
