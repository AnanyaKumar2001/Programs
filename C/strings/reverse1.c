#include <stdio.h> 
#include <string.h> 
  
void Reverse(char a[]) 
{ 
    int l=strlen(a); 
    int i; 
    for(i=l-1;i>=0;i--)
    { 
        if(a[i]==' ')
        {        
            a[i] = '\0';      
            printf("%s ",&(a[i])+1); 
        } 
    } 
  
    printf("%s",a); 
} 
  
int main() 
{ 
    char a[100];
    printf("Ente string\n");
    fgets(a,100,stdin); 
    Reverse(a); 
} 