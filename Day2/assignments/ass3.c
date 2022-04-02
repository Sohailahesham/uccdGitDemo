#include<stdio.h>
void main(){
	int x,y,z;
	printf("please enter number 1: ");
	scanf(" %d", &x);
	printf("please enter number 2: ");
	scanf(" %d", &y);
	printf("please enter number 3: ");
	scanf(" %d", &z);
	if(x>y && x>z){
		printf("maximum number is %d",x);
	}
	else if(y>x && x>z){
		printf("maximum number is %d",y);
	}
	else if(z>x && z>y){
		printf("maximum number is %d",z);
	}
}
	