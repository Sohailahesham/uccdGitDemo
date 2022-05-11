#include<stdio.h>
void main(){
	int arr[10];
	for(int i=0;i<10;i++){
		printf("please enter number %d: ",i+1);
		scanf(" %d",&arr[i]);
	}
	printf("the value reversed:\n");
	for(int i=9;i>=0;i--){
		printf("%d\n",arr[i]);
	}
}