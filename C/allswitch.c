#include<stdio.h>
int main()
{
	int n,m,r,i;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("Enter another number : ");
	scanf("%d",&m);
	printf("Press 1 for addition\nPress 2 for subtraction\nPress 3 for multiplication\nPress 4 for division\nPress 5 for modulus\nPress 6 for bitwise and\nPress 7 for bitwise or\nPress 8 f0r bitwise xor\nPrees 9 for bitwise leftshift\nPress 10 for bitwise right shift\nPress 11 for negation of first number\nPress 12 for negation of another number\nPress 13 to check greater number\nPress 14 to check less than\nPress 15 to check greater than or equal to\nPress 16 to check less than or equal to\nPress 17 to check equal\nPress 18 for logical and\nPress 19 to check logical or\nPress 0 to exit the program\n");
	switch(i>0)
	{
		scanf("%d",&r);
		if(r==1)
			printf("The addition is %d\n",n+m);
		else if(r==2)
			printf("The subtraction is %d\n",n-m);
		else if(r==3)
			printf("The multiplication is %d\n",n*m);
		else if(r==4)
			printf("The division is %d\n",n/m);
		else if(r==5)
			printf("The modulus is %d\n",n%m);
		else if(r==6)
			printf("The bitwise and is %d\n",n&m);
		else if(r==7)
			printf("The bitwise or is %d\n",n|m);
		else if(r==8)
			printf("The bitwise xor is %d\n",n^m);
		else if(r==9)
			printf("The bitwise leftshift is %d\n",n<<m);
		else if(r==10)
			printf("The bitwise rightshift is %d\n",n>>m);
		else if(r==11)
			printf("The bitwise negation of n is %d\n",~n);
		else if(r==12)
			printf("The bitwise negation of m is %d\n",~m);
		else if(r==13)
			printf("The relational greater than is %d\n",n>m);
		else if(r==14)
			printf("The relational less tham is %d\n",n<m);
		else if(r==15)
			printf("The relational greater than or equal to  is %d\n",n>=m);
		else if(r==16)
			printf("The relational less than or equal to is %d\n",n<=m);
		else if(r==17)
			printf("The relational equal is %d\n",n==m);
		else if(r==18)
			printf("The logical and is %d\n",n&&m);
		else if(r==19)
			printf("The logical or is %d\n",n||m);	
		else if(r==0)
			break;
		i=i+1;
	}
	return 0;
}
