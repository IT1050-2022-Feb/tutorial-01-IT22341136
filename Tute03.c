#include<stdio.h>
int main(){
	
	int num, sum =0 , i;
	
	
	printf("Enter the Number :");
	scanf("%d",&num);
	
	
	for(i=1;i<=num;i++){
		sum = sum+i;	
	}
	
	printf("sum is :%d",sum);
	
	
	
	return 0 ;
}