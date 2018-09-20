#include<stdio.h>
#include<stdlib.h>
#define max 10

int queue[max];
int front=-1,rear=-1;
void enqueue(void);
int dequeue(void);
int peek(void);
void print(void);
void meanu(void);

int main(){
	int option,val;
	menu();
	do{
		
		printf("\nEnter your option : ");
		scanf("%d",&option);
		switch(option){
			
			case 1:
		    enqueue();
		    break;
			case 2:
	     	enqueue();
		    break;
		    case 3:
	     	enqueue();
		    break;
		    case 4:
	     	enqueue();
		    break;
	
		}
	}while(option!=5);
}

void enqueue(void){
	if(rear==max-1)
	 {printf("Queue is overflow");
	 return;
	 }
	else if(front==-1 && rear==-1)
	 front=rear=0;
	else
	  rear++;
	printf("enter the number that you are going to enter");
	scanf("%d",&queue[rear]);
	
	
	  
}
int dequeue(void);
int peek(void);
void print(void);
void menu(void){
	printf("\n\n******MAIN MENU*********");
	printf("\n1.Insert an element");
	printf("\n2.Delete an element");
	printf("\n3.Peek");
	printf("\n4.Display the queue");
	printf("\n5.EXIT");
	
}

