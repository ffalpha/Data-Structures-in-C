#include <stdio.h>
#define max 10
int queue[max];
int front=-1,rear=-1;
void insert(void);
int delete_element(void);
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
			  insert();
			  break;
			case 2:
				val=delete_element();
				if(val!=-1)
				  printf("The number that delte from the queue is:%d",val);
				break;
			case 3:
				val=peek();
				if(val!=-1)
				  printf("The Frist element in the queue  is:%d",val);
				break;
			case 4:
				display();
				break;
			}
				
		}while(option !=5);
		
}


void insert(void){
	int num;
	printf("Enter the number you want to insereted in the queue:");
	scanf("%d",&num);
	if(rear==max-1)
	  printf(" queue is overflow");
	else if (front=-1 && rear==-1)
	    front=rear=0;
	else
	   rear++;
	   queue[rear]=num;
}

int delete_element(void){
	int val;
	if(front==-1|| front >rear)
	printf("The  queue is underflow");
	else
	  val=queue[front];
	  front++;
	if(front>rear)
	  front=rear=-1;
	return val;
	}


int peek(void){
	if(front==-1|| front >rear)
	 printf("The  queue is empty");
	else
	 return queue[front];
	 
}

void display(void){
	int i;
	if(front==-1|| front >rear)
	printf("The queue is empty");
	else
	{
		for(i=front;i<=rear;i++){
			printf("%d",queue[i]);
		}
	}
	
}

