#include<stdio.h>
void main(){
	int x,y,z;
	x=2; y=5; z=10;
	int *p= &x;
	int *q= &y;
	int *r= &z;
	printf("the value of X is %d\n",x);
	printf("the value of Y is %d\n",y);
	printf("the value of Z is %d\n",z);
	printf("the value of P is %d\n",p);
	printf("the value of Q is %d\n",q);
	printf("the value of R is %d\n",r);
	printf("the value of *P is %d\n",*p);
	printf("the value of *Q is %d\n",*q);
	printf("the value of *R is %d\n",*r);
	printf("Swapping pointers\n");
	r=p; p=q; q=r;
	printf("the value of X is %d\n",x);
	printf("the value of Y is %d\n",y);
	printf("the value of Z is %d\n",z);
	printf("the value of P is %d\n",p);
	printf("the value of Q is %d\n",q);
	printf("the value of R is %d\n",r);
	printf("the value of *P is %d\n",*p);
	printf("the value of *Q is %d\n",*q);
	printf("the value of *R is %d\n",*r);
}