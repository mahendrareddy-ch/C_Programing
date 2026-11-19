/* This program is to implement stack data structures using static memory allocation like Arrays and performing stack operations on it */

#include <stdio.h>
#include <stdlib.h>

struct stack_node{
	int data;
	struct stack_node *link;
};

struct stack_node *newnode,*top = NULL;

void push(int a){
	//In push operation, initally when top =0 the new node link will be 0, and top is pointed to the new node,
	//for later on new nodes created, the link in the new node is pointed to top (which implies the immediate old new node) and then top is updated to the current new node.
	newnode = (struct stack_node *)malloc(sizeof(struct stack_node));
	newnode->data = a;
	newnode->link = NULL;

	newnode->link = top; //top will have the address of the previous newnode, thus linking it to the current new node link element
	top = newnode; //updating the top to current newnode to use it to link it to the next newnode link section

}

void pop(){
	//the pop operation can be performed by deleting the topmost node in the stack
	// we need a temp node to point to delet the topmost node using free(), and then updating the top with the current node link value (while is the node below the topmost node)
	struct stack_node *temp = top;
	if(top == NULL){
		printf("The stack is empty\n");
	}
	else{
	printf("The pop value is: %d \n", top->data);
	top = top->link;
	free(temp);
	}

}

void peek(){
	//the peek operation is only to print the top value in the stack, after printing the top value is not decremented
	
	if(top == NULL)
	{
		printf("The stack is empty\n");
	}
	else{
		printf("The top value is: %d \n", top->data);
	}

}

void display(){
	//this function is to display the stack elements from top to bottom
	
	struct stack_node *temp = top;
	if(top == NULL){
		printf("The stack is empty\n");
	}
	else{
		printf("The stack values are:\n");
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp = temp->link;
		}
	}
}

void main(){
	
	int a,ch;
	
	do{
	printf("Enter the choice operation to perform 1: push, 2: pop, 3: peek,  4: Display \n");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("Enter the data to push into the stack:\n");
			scanf("%d",&a);
			push(a);
			break;
		case 2:
			pop();
			break;
		case 3:
			peek();
			break;
		case 4:
			display();
			break;
		default:
			printf("Entered invalid choice\n");
			break;
	}
	}while(ch!=0);
}
	