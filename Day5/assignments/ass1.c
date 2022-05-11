#include<stdio.h>
void main(){
	int arr[10],max,min;
	for(int i=0;i<10;i++){
		printf("please enter number %d: ",i+1);
		scanf(" %d",&arr[i]);
	}
	max=min =arr[0];
	for(int i=1;i<10;i++){
		if(arr[i]<min){
			min=arr[i];
		}
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("Minimum Value is %d\n",min);
	printf("Maximum Value is %d",max);
}