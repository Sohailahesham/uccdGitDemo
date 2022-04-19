#include<stdio.h>
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
float div(int x, int y);
int and(int x, int y);
int or(int x, int y);
int xor(int x, int y);
int rem(int x, int y);
int not(int z);
int inc(int z);
int dec(int z);
void main(){
	int id,n,x,y,z;
	printf("      simple calculator\n");
	printf("1-ADD  2-SUBTRACT   3-MULTIPLY  4-DIVIDE  5-AND\n "
	       "6-OR  7-NOT  8-XOR  9-REMINDER  10-INCREMENT  11-DECREMENT\n");
	printf("enter operation ID: ");
	scanf(" %d", &id);
	switch(id){
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
	           	n=2;
				break;
		case 7:
		case 10:
		case 11:
                n=1;
				break;
		default:
		       printf("this operation is not declared");
			   break;
	}		
    if(n==2){
		printf("enter two numbers: ");
		scanf(" %d",&x);
		scanf(" %d",&y);
	}
	else if (n==1){
		printf("enter number: ");
		scanf(" %d",&z);
	}
	if(id ==1){
		printf("%d + %d = %d",x,y,add(x,y));
	}
	else if(id ==2){
		printf("%d - %d = %d",x,y,sub(x,y));
	}
	else if(id ==3){
		printf("%d * %d = %d",x,y,mul(x,y));
	}
	else if(id ==4){
		printf("%d / %d = %d",x,y,div(x,y));
	}
	else if(id ==5){
		printf("%d AND %d = %d",x,y,and(x,y));
	}
	else if(id ==6){
		printf("%d OR %d = %d",x,y,or(x,y));
	}
	else if(id ==7){
		printf("NOT %d = %d",z,not(z));
	}
	else if(id ==8){
		printf("%d XOR %d = %d",x,y,xor(x,y));
	}
	else if(id ==9){
		printf("%d reminder %d = %d",x,y,rem(x,y));
	}
	else if(id ==10){
		printf("increment %d = %d",z,inc(z));
	}
	else if(id ==11){
		printf("decrement %d = %d",z,dec(z));
	}
	
}
int add(int x, int y){
	return x+y;
}
int sub(int x, int y){
	return x-y;
}
int mul(int x, int y){
	return x*y;
}
float div(int x, int y){
	return x/y;
}
int and(int x, int y){
	return x&y;
}
int or(int x, int y){
	return x|y;
}
int xor(int x, int y){
	return x^y;
}
int rem(int x, int y){
	return x%y;
}
int not(int z){
	return !z;
}
int inc(int z){
	return ++z;
}
int dec(int z){
	return --z;
}