#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* next;
}node;

void Insert(int n);
void Print();
void dele();
void rev();
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
//dele();
rev();
	Print();
//	dele();
	Print();
}

void Insert(int n){
	int x,i,count=0;
	node*temp1=(node*)malloc(sizeof(node));
	temp1->data=n;
	temp1->next=NULL;
	printf("At which point do you want to inser this number?: ");
	scanf("%d",&x);
	if(count<=x){
	
	if(x==1){
		temp1->next=head;
		head=temp1;
		count++;
		return;
	}

	else{
	count++;
	node*temp2=head;
    for(i=0;i<x-2;i++){
		temp2=temp2->next;
	}
	temp1->next=temp2->next;
    temp2->next=temp1;
	
	}
}else
 printf("Error");
 return;
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
		temp=temp->next;
	}
	node * temp2=temp->next;
temp->next=temp2->next;
	free(temp2);
	}
	
}

void rev(){
	node *pre,*current,*forward;
	pre=NULL;
	current=head;
	while(current!=NULL){
		forward=current->next;
		current->next=pre;
		pre=current;
		current=forward;
	}
	head=pre;
}
