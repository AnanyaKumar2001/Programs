#include <stdio.h>
#include <string.h>

/* Function declaration */
int countOccurrences(char * str, char * toSearch);


int main()
{
    char str[100];
    char toSearch[100];
    int count;
    printf("Enter any string: ");
    fgets(str,100,stdin);
    printf("Enter word to search occurrences: ");
    fgets(toSearch,100,stdin);
    count = countOccurrences(str, toSearch);
    printf("Total occurrences of '%s': %d", toSearch, count);
    return 0;
}

int countOccurrences(char * str, char * toSearch)
{
    int i, j, found, count;
    int stringLen, searchLen;
    stringLen = strlen(str);     
    searchLen = strlen(toSearch); 
    count = 0;
    for(i=0; i <= stringLen-searchLen; i++)
    {
    
        found = 1;
        for(j=0; j<searchLen; j++)
        {
            if(str[i + j] != toSearch[j])
            {
                found = 0;
                break;
            }
        }

        if(found == 1)
        {
            count++;
        }
    }

    return count;
}
