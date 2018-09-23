#include<stdio.h>
#define max 6
void insertcq();
void deletecq();
void displaycq();
int cq[max],front=0,rear=0,count=0;

void insertcq(){
	int num;
	if (count==max)
	  printf("Circular Queue is Full");
	else{
		printf("\n Enter data:");
		scanf("%d",&num);
		cq[rear]=num;
		rear=(rear+1)%max;
		count++;
		printf("\nData Inserted in the Circular Queue");
	}
}

void deletecq(){
	if(count==0)
	  printf("\nCircular Queue is Empty");
	else
	 {
	 	printf("\n Deleted element from  Circular Queue is %d ",cq[front]);
	 	front=(front+1)%max;
	 	count--;
	 }
}
void displaycq(){
	int i,j;
	if(count==0)
	  printf("\nCircular Queue is Empty");
	else{
			printf("\Elements in Circular Queue are ");
			j=count;
			for(i=front;j!=0;j--){
				printf("%d\t",cq[i]);
				
			}
		
	}
}



int main(){
int ch;
	do
	{
		
	
	printf("\n\tCircular Queue Operations using ARRAY..");
	printf("\n--------**********---------\n");
	printf("\n 1.Insert");
	printf("\n 2.Delete");
	printf("\n 3.Display");
	printf("\n 4.Quit");
	printf("\n Enter Your Choice");
	scanf("%d",&ch);
		switch(ch){
			case 1:
				 insertcq();
				break;
			case 2:
			    deletecq();
				break;
			case 3:
				 displaycq();
				break;
			case 4:
				break;
			default:
			   printf("\n Invalid choise");
		}
	}while(ch!=4);
}
