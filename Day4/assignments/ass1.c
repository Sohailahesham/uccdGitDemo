#include<stdio.h>
int max(int a,int b, int c,int d);
int min(int a,int b, int c,int d);
void main(){
	int a,b,c,d;
	printf("enter four numbers: \n");
	scanf(" %d",&a);
	scanf(" %d",&b);
	scanf(" %d",&c);
	scanf(" %d",&d);
	printf("The Maximum Number is %d\n",max(a,b,c,d));
	printf("The Minimum Number is %d",min(a,b,c,d));
}
int max(int a,int b, int c,int d){
	if(a>b&&a>c&&a>d){
		return a;
	}
	else if(b>a&&b>c&&b>d){
		return b;
	}
	else if(c>b&&c>a&&c>d){
		return c;
	}
	else if(d>b&&d>c&&d>a){
		return d;
	}
}
int min(int a,int b, int c,int d){
	if(a<b&&a<c&&a<d){
		return a;
	}
	else if(b<a&&b<c&&b<d){
		return b;
	}
	else if(c<b&&c<a&&c<d){
		return c;
	}
	else if(d<b&&d<c&&d<a){
		return d;
	}
}