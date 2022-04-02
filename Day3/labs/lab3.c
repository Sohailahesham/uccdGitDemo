#include<stdio.h>
void main(){
	int i,x;
	int sum =0;
	float avg;
	for(i=1;i<=10;i++){	
		printf("number-%d: ",i);
		scanf("  %d",&x);
		sum+=x;
	}
	printf("sum= %d\n",sum);
	avg=sum/10.0;
	printf("average= %0.3f",avg);
}