#include<stdio.h>
#include<string.h>
#define max 100
int top=-1,flag=1;
char stack[max],arr[max],temp;
void push(char n);
char pop();

int main(void){
	printf("enter a expression:  ");
	scanf("%[^\n]c",arr);
	for(int i=0;i<strlen(arr);i++){
		if(arr[i]=='('|| arr[i]=='{'|arr[i]=='[')
		   push(arr[i]);
		if(arr[i]==')'|| arr[i]=='}'|arr[i]==']')
		{
			if(top==-1)
			   flag=0;	
		}else
		   {
		   	temp=pop();
		   	if(arr[i]==')'&& (temp=='{'||temp=='[' ))
		   	      flag=0;
		   	if(arr[i]=='}'&& (temp=='('||temp=='[' ))
		   	      flag=0;
		   	if(arr[i]==']'&& (temp=='{'||temp=='(' ))
		   	      flag=0;
		   } 
	
		  	
	}
if(top>=0)
    flag=0;
if (flag==1)
   printf("valid expression");
else 
   printf("Invalid expression");
}

void push(char n){
	if(top==max-1)
		printf("Stack is overflow");
	else
	  stack[++top]=n;
}
char pop(){
	if(top==-1)
		printf("Stack is underflow");
	else
	  return stack[top--];
}
