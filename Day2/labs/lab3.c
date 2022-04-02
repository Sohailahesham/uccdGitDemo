#include<stdio.h>
void main(){
	int x;
	printf("please enter number:");
	scanf(" %d", &x);
	if(x % 2 == 0){
	printf("Number is even");
	}
	else if(x % 2 == 1)
	{
		printf("Number is odd");
    }
}