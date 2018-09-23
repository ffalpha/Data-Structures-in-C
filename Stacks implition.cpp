#include <stdio.h>
#define max 10
int stack[max];
int top=-1;
void push(void);
int pop(void);
void display(void);
int peek();
int main(){
	
	int option,val;
	do
	{
		printf("\n\n*****MAIN MENU***");
		printf("\n1. Insert an element");
		printf("\n2. Delete an element");
		printf("\n3. Peek");
		printf("\n4. Display");
		printf("\n5. Exit");
		printf("\nEnter your option: ");
		scanf("%d",&option);
		switch(option){
			
			case 1:
			  push();
			  break;
			case 2:
				val=pop();
				if(val!=-1)
				  printf("The number that delete from the stack is:%d",val);
				break;
			case 3:
			{
			val=peek();
			  if(val!=-1)
			     printf("The Top element in the stack  is:%d",val);
				break;}
			case 4:
				display();
				break;
			}
				
		}while(option !=5);
		
}

void push(void){
	int num;
	printf("Enter the number you want to insereted in the stack:");
	scanf("%d",&num);
	if(top==max-1)
	  printf(" stack is overflow");
	else
	   stack[++top]=num;
}

int pop(void){
	int val;
	if(top==-1)
	   printf(" stack is overflow");
	else
	{
	val =stack[top];
	  top--;
	  return val;}
	   
	    
}

int peek(void){
	if(top==-1)
	 printf("Errror:Stack is empty");
	else
	  return stack[top];
}
void display(void){
	int j;
	if(top==-1)
	 printf("Errror:Stack is empty");
	else
	  {
	   for(j=top;j<0;j--)
	      printf("\n%d",stack[j]);
	  }
}

