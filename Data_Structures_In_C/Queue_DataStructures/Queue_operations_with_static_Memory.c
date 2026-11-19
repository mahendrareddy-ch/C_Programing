/* This program is to implement queue data structures using static memory allocation like Arrays and performing stack operations on it */

#include <stdio.h>

#define SIZE 10
int queue[SIZE],front = -1,rear=-1; //front and rare values are -1 initially

void enque(int a){
	//enuque is noting but, adding data into queue from rare end,
	
	if(rear==(SIZE-1))
	{
		printf("The queue is overflown\n");
	}
	else if ((front == -1) && (rear == -1)){
		front = 0;
		rear = 0; // for the first value into queue, the front and reare are pointed to 0
		queue[rear]=a;
	}
	else{
		rear++; //first need to increament rear before storing value into queue
		queue[rear]=a;
	}
}

void deque(){
	//deqque is nothing but, removing data from front end by increamenting the front value
	
	if(front == -1)
	{
		printf("The queue is empty\n");
	}
	else if(front == rear){
		front = -1;
		rear = -1; //front = rear will happen only when one value is left in the queue, to remove that value we are renitializing the front to -1,
							// and to reuse the queue for next enque we are reinitializing the rear to -1
	}
	else{
		printf("The deque value at front end is: %d \n",queue[front]);
		front++; //increamenting the front end to move to next front value
	}
}
void peek(){
	//the peek operation is only to print the front value in the queue, after printing the front value is not decremented
	
	if(front == -1)
	{
		printf("The queue is empty\n");
	}
	else{
		printf("The deque value at front end is: %d \n",queue[front]);
	}
}

void display(){
	//this function is to display the stack elements from top to bottom
	
	if(front == -1)
	{
		printf("The queue is empty\n");
	}
	else{
		printf("The queue elements are: \n");
		for(int i = front;i<(rear+1);i++)
		{
			printf("%d ",queue[i]);
		}
	}
}

void main(){
	
	int a,ch;
	
	do{
	printf("Enter the choice operation to perform 1: enqueue, 2: dequeue, 3: peek,  4: Display \n");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("Enter the data to push into the queue:\n");
			scanf("%d",&a);
			enque(a);
			break;
		case 2:
			deque();
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