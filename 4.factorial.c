#include<stdio.h>

int fact(int n);
int main(void){
	int n;
	printf("Enter a decimal number: ");
	scanf("%d",&n);
	printf("The factorial number of %d is : ",n);	
	printf("%d",fact(n));
	
}

int fact(int n){
	if(n==0 || n==1){
		return 1;
	}else
	    return n*fact(n-1);
}

