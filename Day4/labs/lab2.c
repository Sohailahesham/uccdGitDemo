#include<stdio.h>
void swap();
void main(){
	swap();
}
void swap(){
	int x,y;
	printf("before swap: \n");
	printf("first number: ");
	scanf(" %d", &x);
	printf("second number: ");
	scanf(" %d", &y);
	x=y+x;
	y=x-y;
	x=x-y;
	printf("\n");
	printf("after swap:\n");
	printf("first number: %d \n",x);
	printf("second number: %d \n",y);
}