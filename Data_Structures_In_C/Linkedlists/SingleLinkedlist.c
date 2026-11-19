/* This program is to implement a single linked list in c programming */

#include <stdio.h>
#include <stdlib.h>

struct list_node{
	int data;
	struct list_node *next;
};

void main()
{
	struct list_node *newnode, *head, *tail;
	int a,c=0;
	head = NULL;
	tail = NULL;

	while(a)
	{
		printf("Enter the choice if you want to create a linked list node (0 or 1): \n");
		scanf("%d",&a);
		if(a==1){
			newnode = (struct list_node *)malloc(sizeof(struct list_node));
			printf("Enter the data of list node:\n");
			scanf("%d",&newnode->data);
			newnode->next = NULL;

			if(head == NULL)
			{
				head = newnode;
				tail = newnode;
			}
			else{
				tail->next = newnode;
				tail = newnode;
			}
		}
	}
	printf("The listed with entered data values is created successfully!\n");
	tail = head;
	while (tail!=NULL)
	{
		tail = tail->next;
		c++;
	}
	printf("The entered list has %d nodes.\n",c);
	tail = head;
	printf("The linked list is:\n");
	while(tail!=NULL)
	{
		printf("%d->",tail->data);
		tail = tail->next;
	}
	printf("NULL");
	
}

