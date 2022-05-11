#include<stdio.h>
void main(){
int i, first, last, middle, search, arr[10]; 
  for(int i=0;i<10;i++){
		printf("please enter number %d: ",i+1);
		scanf(" %d",&arr[i]);
	}  
   printf("Enter the value to find:\n");
   scanf(" %d", &search);
   first = 0;
   last = 9;
   middle = (first+last)/2;
   while (first <= last) {
      if (arr[middle] < search){
         first = middle + 1;    
        }  
	  else if (arr[middle] == search) {
         printf("Value Found.\n");      
	     break;
        }
      else
         last = middle - 1;
	    
      middle = (first + last)/2;
    }
   if (first > last){
      printf("Value Not Exist.");
    }
}