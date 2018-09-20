#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node* next;
}node;

node* head;
void insert();
void print();
void dele();
void rev();

int main(){
	head=NULL;
	int b;
	printf("\t\tLinked list operations\n");
	printf("1.Insert item\n");
	printf("2.Delte item\n");
	printf("3.Display Linked list\n");
	printf("4.Reverse the linked list\n");
	printf("5.Exit\n");
	
	
	do{
		printf("Enter your option: ");
		scanf("%d",&b);
	switch(b){
		case 1:
			insert();
			break;
		case 2:
			 dele();
			break;
		case 3:   
            print();
           break;
        case 4:
        	rev();
        	break;
        case 5:
        	break;
        default:
        	printf("Wrong choice\n");
        	continue;
}
	}while(b!=5);
}

void insert(){
	int x,j,n,i;
	printf("How much numbers are you going to enter ? ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{   printf("\tEnter a number : ");
		node*temp=(node*)malloc(sizeof(node));
		scanf("%d",&temp->data);
		temp->next=NULL;
		printf("\tFor which postiosn do you want to enter the value? ");
		scanf("%d",&x);
		if(x==1){
			temp->next=head;
			head=temp;
			print();
			continue;
		}else{
			node*temp2=head;
			for(j=0;j<x-2;j++)
			{
				temp2=temp2->next;
			}
			temp->next=temp2->next;
			temp2->next=temp;
			print();
			continue;
		}
		print();	
}
}

void dele(){
	int i,n,x,j;
	node* temp=head;
	printf("Which item do you want to delete");
	scanf("%d",&x);
	if(x==1){
		head=temp->next;
		free(temp);
		return;
	}else{
		for(i=0;i<x-2;i++){
		temp=temp->next;//n-1 node
	}
	node * temp2=temp->next;//n node
	temp->next=temp2->next;//n+1 node
	free(temp2);
	}
	print();
	
	
}

void print(){
	node* ptr=head;
	printf("List is\n");
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}

void rev(){
	node * pre,*current,*forward;
	pre=NULL;
	current=head;
	while(current!=NULL){
		forward=current->next;
		current->next=pre;
		pre=current;
		current=forward;
	}
	head=pre;
	print();
}
