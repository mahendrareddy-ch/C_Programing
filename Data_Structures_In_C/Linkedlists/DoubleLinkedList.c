/* This program is to implement the double linked list */

#include <stdio.h>
#include <stdlib.h>

struct DL_node{
	int data;
	struct DL_node *prev;
	struct DL_node *next;
};

void main()
{
	int c=0,a=1;
	struct DL_node *head=NULL,*tail=NULL,*temp=NULL,*newnode;
	while(a){
		
		printf("Enter the choice to implement the double linked list (0 or 1)\n");
		scanf("%d",&a);
		if(a==1){
			newnode = (struct DL_node *)malloc(sizeof(struct DL_node));
			printf("Enter the list node data\n");
			scanf("%d",&newnode->data);
			newnode->next = NULL;
			newnode->prev = NULL;
			if(head == NULL){
				head = newnode;
				temp = newnode;
				tail = newnode;
				newnode->prev = NULL;
				newnode->next = NULL;
			}
			else{
				temp->next = newnode;
				newnode->prev = temp;
				temp = newnode;
				tail = newnode;
			}
		}
	}
	temp = head;
	while(temp!=NULL)
	{
		c++;
		temp = temp->next;
	}
	printf("The length of entered double linked list is %d\n",c);
	temp = head;
	printf("%xp -> NULL",head);
	while(temp!=NULL)
	{
		temp = temp->next;
		printf("<-[%xp | %d | %xp]->",temp->prev,temp->data,temp->next);
	}
	printf("NULL -> %xp\n",tail);
	while(c)
	{
		c--;
		free(head);
		head = head->next;
	}
}