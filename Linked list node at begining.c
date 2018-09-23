#include<stdio.h>


typedef struct node{
	int data;
	struct node* next;
}node;

void Insert(int n);
void Print();

node* head;
int main(){
	
	head=NULL;
	int i,n,x;
	printf("How many numbers are you going to enter ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter a number: ");
	    scanf("%d",&x);
	    Insert(x);
	    Print();
	}
}

void Insert(int n){
	node*temp=(node*)malloc(sizeof(node));
	temp->data=n;
	temp->next=head;
	head=temp;
}

void Print(){
	node*temp=head;
	printf("List is\n");
	while(temp!=NULL){
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
