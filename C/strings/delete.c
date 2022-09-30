#include <stdio.h>
#include <string.h>
void main()
{

    int i,j=0,k=0,count=0;
    char t[100],s[20];
    char a[10][20];
    puts("Enter your text :");
    fgets(t,100,stdin);

 

/* Converts the string into 2D array */    
    for (i=0;t[i]!='\0';i++)
    {

        if(t[i]==' ')
        {

            a[k][j] = '\0';
            k++;
            j = 0;

        }
        else
        {

            a[k][j] = t[i];
            j++;

        }

    }

    a[k][j] = '\0';
    printf("Enter the string to delete :");
    scanf("%s", s);

 

/* Compares the string with given word */    

    for(i=0;i<k+1;i++)
    {

        if(strcmp(a[i], s) == 0)
        {

            for(j=i;j<k+1;j++)

                strcpy(a[j],a[j+1]);

            k--;

        }

 

    }

    for(i=0;i<k+1;i++)
    {

        printf("%s ", a[i]);

    }


}
