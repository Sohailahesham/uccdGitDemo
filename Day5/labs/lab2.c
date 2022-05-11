#include<stdio.h>
void main(){
	int arr[10];
	int i,sum=0;
	float avg;
	for(i=0;i<10;i++){
		printf("please enter number %d: ",i+1);
		scanf(" %d",&arr[i]);
	}
	for(i=0;i<10;i++){
		sum += arr[i];
	}
	avg = (float)sum/10.0;
	printf("The Sum: %d\n",sum);
	printf("The Average: %0.3f",avg);
}