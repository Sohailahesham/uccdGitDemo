#include<stdio.h>
void main(){
	int hours;
	float salary;
	printf("please enter your working hours:");
	scanf(" %d", &hours);
	salary = hours *50;
	if(hours <40){
	 salary = salary *0.1;
	 printf("your salary: %0.3f",salary);
	}
	else{
	printf("your salary: %0.1f",salary);
    }
}