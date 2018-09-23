#include<stdio.h>

int sum(int n);
int main(void){
	int n;
	printf("Enter a decimal number: ");
	scanf("%d",&n);
	printf("The Sum of 1 to  %d is : ",n);	
	printf("%d",sum(n));
	
}

int sum(int n){
	if(n==0 || n==1){
		return n;
	}else
	    return n+sum(n-1);
}
