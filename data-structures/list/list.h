#ifndef __list__ 
#define __list__

struct list_node {
	int data;
	struct list_node * next;
};

//typedef struct list_node * NodePtr;

void create (struct list_node **,int);
//void new(NodePtr *Node,int );

void add_beg (struct list_node **,int);
void add_end (struct list_node **,int);

void remove_beg (struct list_node **);
void remove_end (struct list_node **);

//void insert(struct list_node **,int,int);
//void delete(struct list_node**,int);

void print(struct list_node*);

#endif 
