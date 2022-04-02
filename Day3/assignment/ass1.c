#include<stdio.h>
void main(){
	int x,y,sum;
	for(;;){
		printf("please enter first number:");
		scanf(" %d",&x);
		printf("please enter second number:");
		scanf(" %d",&y);
		sum=x+y;
		printf("The Result: %d\n",sum);
		printf("\n");
	}
}