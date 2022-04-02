#include<stdio.h>
void main(){
	int id,pass;
    printf("please enter your ID:");
	scanf(" %d",&id);
	if(id!=1234&&id!=5678&&id!=9870){
		printf("you are not registered");
	}
	if(id==1234||id==5678||id==9870){
		printf("please enter your password: ");
		scanf(" %d",&pass);		
		if(pass!=7788&&pass!=5566&&pass!=1122){
     		for(int i=1;i<3;i++){
			printf("Try again:");
		    scanf(" %d",&pass);
			if(id==1234&&pass==7788){
				break;
			}
			else if(id==5678&&pass==5566){
				break;
			}
			else if(id==9870&&pass==1122){
				break;
			}
				
			}
			printf("Incorrect password for 3 times. No more tries");
		}
		if(id==1234&&pass==7788){
				printf("welcome ahmed");
			}
			else if(id==5678&&pass==5566){
				printf("welcome amr");
				
			}
			else if(id==9870&&pass==1122){
				printf("welcome wael");
				
			}
	}
}

