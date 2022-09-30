#include<stdio.h>
int main(){
	int n,a[20],i,j,q,w,e,r,t,count,s;
	scanf("%d", &n);              			// Reading input from STDIN
	scanf("%d", &q);              			// Reading input from STDIN
	scanf("%d", &w);              			// Reading input from STDIN
	scanf("%d", &e);              			// Reading input from STDIN
	scanf("%d", &r);              			// Reading input from STDIN
	scanf("%d", &t);              			// Reading input from STDIN
	a[n] = q, w, e, r, t;
    count = 0;
    s==1;
    while(s!=0)
    {
        s==0;
        count=count+1;

        for(j=1;j<=n-1;j++)
        {
                if(a[j]>a[j+1])
                {
                    a[j]+=a[j+1];
                    a[j+1]=a[j]-a[j+1];
                    a[j]-=a[j+1];

                    s==1;

                }

        }

    }
	printf("%d", count);


}

