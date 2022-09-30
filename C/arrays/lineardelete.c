#include<stdio.h>
int main()
{
	int a[20],n,i,l,d;
	printf("Enter no of elements : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter a value : ");
		scanf("%d",&a[i]);

	}
	printf("Enter element to search : ");
	scanf("%d",&l);
	for(int i=0;i<n;i++)
	{
		if(a[i]==l)
		{
			printf("Element is found\n");
			printf("The index is : %d\n",i );
			d=i;
 
   			if (d<=n)
   			{
    				for (i=d;i<n;i++)
    				{
        	 			a[i]=a[i+1];
      				}
      				
      			  	for (i=0;i<n-1;i++)
   					{
    					printf("%d\t", a[i]);
   					}
   					break;
   
   			}

   		}

   	}
 

	
}
