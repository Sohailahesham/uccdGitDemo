#include<stdio.h>
void main(){
	int x,i;
	printf("enter the answer of 3*4=");
	scanf(" %d",&x);
    while(x!=12){
		printf("Not correct. please try again: ");
		scanf(" %d",&x);
		i++;
	}
	printf("Thanks");	
}
