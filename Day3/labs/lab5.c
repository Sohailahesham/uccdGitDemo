#include<stdio.h>
void main(){
	int i,n;
	printf("enter the number to display its multiplication table:");
	scanf(" %d", &n);
	for(i=1;i<=n;i++){
		printf("%d x %d = %d\n",n,i,n*i);
	}
}