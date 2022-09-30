#include<stdio.h>
#include<string.h>
void grade();
void roomcharge();
union choice
{
   char gr[100];
   int rch;
}u;
int main()
{
	int n,i,ch,f,k;
	char x[2];
	printf("enter no.of hotels\t");
	scanf("%d",&n);
	struct hotel
	{
	    char n[100];
	    char ad[100];
	    char g[10];
	    int  room;
	    int  rc;
	}h[n];
	for(i=0;i<n;i++)
	{
	    fgets(x,2,stdin);
    	printf("\nHotel %d details\n",i+1);
    	printf("\nhotel name:\t");
    	fgets(h[i].n,100,stdin);
    	printf("\nhotel address:\t");
    	fgets(h[i].ad,100,stdin);
    	printf("\nhotel grade:\t");
    	fgets(h[i].g,10,stdin);
    	printf("\nno.of rooms in hotel:\t");
    	scanf("%d",&h[i].room);
    	printf("\nroom charges:\t");
    	scanf("%d",&h[i].rc);
	}
	void grade()
	{
        printf("\nenter grade\t");
        fgets(x,10,stdin);
        fgets(u.gr,100,stdin);
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;u.gr[j]!='\0';j++)
            {
                for(int k=0;h[i].g[k]!='\0';k++)
                {
                    if(u.gr[j]==h[i].g[k])
                    {
                            c++;
                           	if(c==strlen(u.gr))
                           	{
                                printf("\n%s\t  \t%s\n",h[i].n,h[i].g);
                          
                            }
                    }
                }
            }
   		}
  
	}
	void roomcharge()
	{
	        printf("\nenter room charges:\t");
	        scanf("%d",&u.rch);
	        for(int i=0;i<n;i++)
	        {
	                if(u.rch==h[i].rc)
	                {
	                    printf("\n%s\t  \t%d\n",h[i].n,h[i].rc);
	                }
	                else f=1;
	        }
	        if(f==1) printf("\nGiven room charges not present in hotels list\n");
	}    
	printf("\n1.Enter grade\n");
	printf("\n2.room charges\n");
	printf("\nenter your choice\t");
	scanf("%d",&ch);
	switch(ch)
	{
	    case 1:
	        grade();
		    break;
   		case 2:
        	roomcharge();
        	break;
	}
}




           

       

