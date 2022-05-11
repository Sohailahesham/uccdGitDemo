#include<stdio.h>
void main(){
	int arr[10];
	int *ptr =arr;
	int sum=0;
	printf("          ARRAY NUMBERS\n");
	for(int i=0;i<10;i++){
		printf("please enter number %d: ",i+1);
		scanf(" %d",&arr[i]);
	}
	for(int i=0;i<10;i++){
		sum+= *ptr;
		ptr++;
	}
	printf("summation of array is %d",sum);
	
}