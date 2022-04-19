#include<stdio.h>
int Get_Max(int x, int y);
void main(){
	int a,b;
	printf("enter number 1: ");
	scanf(" %d", &a);
	printf("enter number 2: ");
	scanf(" %d", &b);
	printf("the maximum value is %d",Get_Max(a,b));
}
int Get_Max(int x, int y){
	if(x>y){
		return x;
	}
	else if (y>x)
	{
		return y;
	}
}