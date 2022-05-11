#include<stdio.h>
int sort(int arr[10]);
int i,j;
void main(){
	int arr[10];
	int *p = arr;
	for( i=0;i<10;i++){
		printf("please enter number %d: ",i+1);
		scanf(" %d",&arr[i]);
	}
	sort(p);
}
int sort(int *arr){
	int temp;
	 for(i=1;i<10;i++)
	{
        for(j=0;j<(10-i);j++)
		{
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }  
    	}
	}
    printf("Array after sorting: \n");

    for(i=0;i<10;i++){

        printf("%d\n",arr[i]);
	}
	
}