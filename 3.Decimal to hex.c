#include<stdio.h>

int hex(int n);
int main(void){
	int n;
	printf("Enter a decimal number: ");
	scanf("%d",&n);
	printf("The Hexadecimal number of %d is : ",n);	
	hex(n);
	
}

int hex(int n){
int x; //recusrive 
	if(n==0)
	 return n;
	else{
	   hex(n/16);
	   x=n%16;
	   switch(x){
	   	case 10: 
	   	     printf("A");
	   	      break;
	    case 11:
	    	   printf("B");
	   	      break;
	    case 12:
	    	printf("C");
	   	      break;
	    case 13:
	    	printf("D");
	   	      break;
	    case 14:
	    	printf("E");
	   	      break;
	    case 15:
	    	printf("F");
	   	      break;
	    default:
	    	  printf("%d",x);
	   	      break;
	   }
	   	
		
	}
}
