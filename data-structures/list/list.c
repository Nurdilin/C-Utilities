#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"


void create(struct list_node** beg,int d) {
    //creation of first list node
	*beg=malloc(sizeof(struct list_node));
	(*beg)->data=d;
	(*beg)->next=NULL;
	
}

void add_end(struct list_node **root,int d) {
	struct list_node *temp,*temp2;
	temp=*root;
	
	if(*root==NULL) {
        //if list is empty
        temp2=malloc(sizeof(struct list_node));
        temp2->data=d;
        temp2->next=NULL;
        *root=temp2;
	}
	else {
        temp2=malloc(sizeof(struct list_node));//new node
        temp2->data=d;
        temp2->next=NULL;
	
		while(temp->next!=NULL)//*temp.next//traverse list till its end
			temp=temp->next;
	
		temp->next=temp2;
	}
    printf("Added on end\n");
}

void add_beg(struct list_node **root,int d) {
	struct list_node *temp;

	temp=malloc(sizeof(struct list_node));
	temp->data=d;
	temp->next=(*root);
	*root=temp;

    printf("Added on beg\n");
}

void remove_beg(struct list_node **root) {	
	struct list_node *temp;

	if(*root==NULL) {
		printf("list is empty\n");
	}
	else {
		temp=*root;
		*root=(*root)->next;
		free(temp);
	}
    printf("Removed from beg\n");
}

void remove_end(struct list_node **root) {
    //megalo provlima me ton teleftaio komvo(an eiani 1mono)
	struct list_node *temp,*q;

	if(*root==NULL) {
		printf("list is empty");
	}
	else {	
        temp=(*root);
		while (temp->next!=NULL) { ///traverse list till its end
			q=temp;//proteleftaios
			temp=temp->next;
		}
		if(temp == (*root)) { //an o temp taftizetai me ton root
            printf("temp=root\n");
			free(temp);
			(*root) = NULL;
		}
		else {
            printf("temp not root\n");
			free(temp);
			q->next=NULL;
		}
	}
    printf("Removed from end\n");
}

void print(struct list_node *root){
    //dn xreiazetai ** afou dn tha in peiraksume	
	if (root == NULL) {
		printf("list is empty\n");
	}
	else {
		printf("%d->",root->data);
		while (root->next!=NULL) {
			root=root->next;
			printf("%d->",root->data);
		}
		printf("NULL\n");
	}
}

/*void add(struct list_node **beg, int d, int thesi)
{

	struct list_node *temp1, *temp2;
	int i;
	
	if(*beg==NULL)
	{
		temp2=malloc(sizeof(struct list_node));
		temp2->data=d;
		temp2->next=NULL;
		*beg=temp2;
	}
	else
	{
		temp1=*beg;	
		for(i=1;i<thesi-1;i++)//na tsekaro to -1
		{
			temp1=temp1->next;
		}
		temp2=malloc(sizeof(struct list_node));
		temp2->data=d;
	
		temp2->next=temp1->next;
		temp1->next=temp2;
	}
		
} 

void remove(struct list_node **beg,int thesi)
{
	struct list_node *temp1,*temp2;//*temp3
	int i;
	temp1=*beg;
	for(i=1;i<thesi-1;i++)
	{
		temp1=temp1->next;//temp1 1thesi prin ton komvo to be removed
	}
	temp2=temp1->next;//o to be remove komvos
	//temp3=temp2->next;//o epomenos apo ton to be removed peritto
	
	temp1->next=temp2->next;//=temp3
	free(temp2);
}*/
