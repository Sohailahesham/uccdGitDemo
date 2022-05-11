#include<stdio.h>
int sum(int *a,int *b);
void main(){
	int x,y;
	printf("Please,Enter value 1: ");
	scanf(" %d", &x);
	printf("Please,Enter value 2: ");
	scanf(" %d", &y);
	printf("the result is %d",sum(&x,&y));
	
}
int sum(int *a,int *b){
	return *a+*b;
}