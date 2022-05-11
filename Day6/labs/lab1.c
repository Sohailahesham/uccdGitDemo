#include<stdio.h>
void main(){
	int n=10;
	printf("N before change is %d\n",n);
	int *ptr=&n;
	*ptr =20;
	printf("N after change is %d\n",n);
}