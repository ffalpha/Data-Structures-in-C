#include<stdio.h>
#include <string.h>

#define MAX 100
int top=-1;
char stack[MAX],char1[MAX],char2[MAX];
void push(char n);
int pop(void);
int c;
int main(void){
	printf("Enter a word to check it Palindrome or not : ");
	scanf("%[^\n]c",char1);

	for (int j=0;j<strlen(char1);j++)
	{
		push(char1[j]);

	}	for (int j=0;j<strlen(char1);j++)
	{
	
	     char2[j]=pop();
	    
	}
	for (int j=0;j<strlen(char2);j++)
	{
	     if(char1[j]==char2[j])
		 	 c=1;
	     else
	    	c=0;
   }
   if(c==1)
    printf("%s is a Palindrome \n", char1);
   else
   printf("%s is not a palindrome \n", char1);
}

void push(char n){
	int num;
	if(top==MAX-1)
	 printf("Stack is overflow");
	else
	  stack[++top]=n;
	   
}
int pop(void){
	if(top==-1)
	 printf("Stack is underflow");
	else;
	  {
	 return stack[ top--];
}	  
	   
}


