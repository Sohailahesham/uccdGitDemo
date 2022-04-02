#include<stdio.h>
void main(){
	int a,b,c,d,e,f,g,h,i,j,n;
	printf("please enter 1st number: ");
	scanf(" %d", &a);
	printf("please enter 2nd number: ");
	scanf(" %d", &b);
	printf("please enter 3rd number: ");
	scanf(" %d", &c);
	printf("please enter 4th number: ");
	scanf(" %d", &d);
	printf("please enter 5th number: ");
	scanf(" %d", &e);
	printf("please enter 6th number: ");
	scanf(" %d", &f);
	printf("please enter 7th number: ");
	scanf(" %d", &g);
	printf("please enter 8th number: ");
	scanf(" %d", &h);
	printf("please enter 9th number: ");
	scanf(" %d", &i);
	printf("please enter 10th number: ");
	scanf(" %d", &j);
	printf("enter the value to search: ");
	scanf(" %d", &n);
	if(n==a){
		printf("value exist at 1st number");
	}
	else if(n==b){
		printf("value exist at 2nd number");
	}
	else if(n==c){
		printf("value exist at 3rd number");
	}
	else if(n==d){
		printf("value exist at 4th number");
	}
	else if(n==e){
		printf("value exist at 5th number");
	}
	else if(n==f){
		printf("value exist at 6th number");
	}
	else if(n==g){
		printf("value exist at 7th number");
	}
	else if(n==h){
		printf("value exist at 8th number");
	}
	else if(n==i){
		printf("value exist at 9th number");
	}
	else if(n==j){
		printf("value exist at 10th number");
	}
	else{
		printf("that value not found");
	}
	
}