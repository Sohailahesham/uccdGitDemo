#include<stdio.h>
void main(){
	int x,y;
	printf("please enter num1:");
	scanf(" %d", &x);
	printf("please enter num2:");
	scanf(" %d", &y);
	printf("summation of %d and %d : %d \n",x,y, x+y);
	printf("subtraction of %d and %d : %d\n", x,y,x-y);
	printf("Anding of %d and %d : %d\n", x,y,x&y);
	printf("Oring of %d and %d : %d\n", x,y,x|y);
	printf("X-oring of %d and %d : %d\n", x,y,x^y);
}