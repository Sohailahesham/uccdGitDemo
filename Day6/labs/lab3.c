#include<stdio.h>
void sumsub();
void main(){
	
	sumsub();
	
}
void sumsub(){
	int x,y;
	printf("Please,Enter value 1: ");
	scanf(" %d", &x);
	printf("Please,Enter value 2: ");
	scanf(" %d", &y);
	int sum =x+y;
    int sub =x-y;	
	int *p1 = &sum;
    int *p2 = &sub;
    printf("The result of summation is %d\n", *p1);
	printf("The result of subtraction is %d", *p2);
	
	
}