#include<stdio.h>


 binary(int n);
int main(void){
	int n;
	printf("Enter a decimal number: ");
	scanf("%d",&n);
	printf("The Binary number of %d is : ",n);	
	binary(n);
	
}

int binary(int n){
printf("%d\n",n); //recusrive 
	if(n==0)
	 return n;
	else{
		binary(n/2);
		printf("%d",n%2);
	}
}
