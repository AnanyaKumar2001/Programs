#include<stdio.h>
int main(){
int i,n,k,j;
printf("enter number:");
scanf("%d",&n);
for(i=n;i>=1;i--){
	for(j=n;j>i;j--){
		printf(" ");
	}
	for(k=1;k<=j;k++){
		printf("%d",i);
	}
	j--;
	printf("\n");
}
}
	
