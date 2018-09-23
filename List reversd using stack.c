#include<stdio.h>
#include<string.h>
#define max 100
int top=-1;
int stack[max],d,j;
void push(void);
int pop(void);

int main(void){
	printf("How much numbers are you going to enter :");
	scanf("%d",&d);
	printf("Plz enetr %d numbers\n",d);
	for (j=0;j<d;j++)
	    push();
	printf("Number list: ");
	for (j=0;j<d;j++)
	    printf("\t%d",stack[j]);
	printf("\nReverse number list : ");
	for (j=0;j<d;j++)
	    printf("\t%d",pop());
}


void push(void){
	int num;
	printf("Enter the number you want to insert into stack:\n");
	scanf("%d",&num);
	if(top==max-1)
	printf("Stack is Overflow");
	else
	 stack[++top]=num;
}

int pop(void){
	if(top==-1)
	 printf("Stack is underflow");
	else;
	 return stack[ top--];
}
