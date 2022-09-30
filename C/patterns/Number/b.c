#include<stdio.h>
int main(){
int i,n,j;
for(i='a';i<='z';i++){
	for(j='a';j<=i;j++){
		printf("%c",i);
	}
	printf("\n");
}
}
