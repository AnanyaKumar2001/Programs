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
  
            // putting the NULL character at the  
            // position of space characters for 
            // next iteration.          
            a[i] = '\0'; 
  
            // Start from next charatcer      
            printf("%s ",&(a[i])+1); 
        } 
    } 
  
    // printing the last word 
    printf("%s",a); 
} 
  
// Driver code 
int main() 
{ 
    char a[100] = "Happy birthday to you"; 
    Reverse(a); 
} 