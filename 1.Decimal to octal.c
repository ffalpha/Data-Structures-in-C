#include<stdio.h>


int octal(int n);
int main(void){
	int n;
	printf("Enter a decimal number: ");
	scanf("%d",&n);
	printf("The Octal number of %d is : ",n);	
	octal(n);
	
}

int octal(int n){ //recusrive 
	if(n==0)
	 return n;
	else{
	   octal(n/8);
		printf("%d",n%8);
	}
}
