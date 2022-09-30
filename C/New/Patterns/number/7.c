/*
5

     
    1
   12
  123
 1234


*/
#include<stdio.h>
int main(){
int n,i,j,k;
scanf("%d",&n);
for(i=0;i<n;i++){
	for(k=n-1;k>=i;k--){
		printf(" ");
	}
	for(j=1;j<=i;j++){
		printf("%d",j);
	}
	printf("\n");
}
}
