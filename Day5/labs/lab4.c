#include<stdio.h>
void main(){
	
	int arr[10];
	int n;
	int found=0;
	for(int i=0;i<10;i++){
		printf("please enter number %d: ",i+1);
		scanf(" %d",&arr[i]);
	}
	printf("Enter value: ");
	scanf(" %d",&n);
	for(int j=0;j<10;j++){
		if(arr[j]==n){
			found++;
		}
		
	}
	if (found >0){
		printf("value exist %d times",found);
    }
	else{
	printf("value not found");
    }
}
	