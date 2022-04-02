#include<stdio.h>
void main(){
	int id,pass;
	printf("please enter your ID: ");
	scanf(" %d", &id);
	if (id!=1234){
		printf("Wrong ID");
	}
	if(id==1234){
		printf("password: ");
		scanf(" %d", &pass);
		if(pass == 789456){
			printf("your username is Sohaila Hesham");
		}
		else if (pass!=789456){
			printf("Wrong Password");
		}
	}
}