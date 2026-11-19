/* This program is to implement stack data structures using static memory allocation like Arrays and performing stack operations on it */

#include <stdio.h>

#define SIZE 10
int stack[SIZE],top = -1;

void push(int a){
	//In push operation, first the top value is incremented by 1 and then value is pushed into the stack
	
	if(top >= (SIZE-1))
	{
		printf("The stack is over flown\n");
	}
	else{
		top++;
		stack[top]=a;
	}
}

void pop(){
	//the pop operation is to take out a value from stack and then decrease the top value by 1
	
	if(top == -1)
		printf("The stack is empty\n");
	else{
		printf("The pop value is : %d\n",stack[top]);
		top--;
	}
}
void peek(){
	//the peek operation is only to print the top value in the stack, after printing the top value is not decremented
	
	if(top == -1)
		printf("The stack is empty\n");
	else{
	printf("The top value is : %d\n",stack[top]);
	}
}

void display(){
	//this function is to display the stack elements from top to bottom
	for(int i = top;i>=0;i--)
	{
		printf("The stack elements are: \n");
		printf("%d ",stack[i]);
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
	