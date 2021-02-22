#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* top=NULL;
void Push(int x){
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=top;
	top=newnode;
}
void display()
{
	struct node* temp;
	temp=top;
	if(top==NULL){
		printf("list is empty");
	}
	else{
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
	}
}
void Top(){
	if(top==NULL){
		printf("stack is empty\n");
		
	}
	else{
		printf("top element is %d",top->data);
	}
}
void Pop(){
	struct node* temp;
	temp=top;
	if(top==NULL){
		printf("error:stack underflow \n");
		
	}
	else{
		printf("popped element is %d\n",top->data);
		top=top->next;
		free(temp);
		
	}

}
void main(){
	Push(2);
	Push(3);
	Push(10);
	display();
	Top();
	Pop();
	Top();
	display();
	getch();
}
