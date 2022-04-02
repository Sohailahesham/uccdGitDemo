#include<stdio.h>
void main(){
	int i,n;
	int fact =1;
	printf("enter a number:");
	scanf(" %d", &n);
	for(i=n;i>=1;i--){
		fact *=i; 
		
	}
	printf("factorial of %d = %d\n",n,fact);
}