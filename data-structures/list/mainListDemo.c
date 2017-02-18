#include<stdio.h>
#include<stdlib.h>
#include "list.h"

int main(void) {
	//struct list_node *list,*list2;
    struct list_node *list;
	list=NULL;

	print(list);

    printf("1\n");
	add_beg(&list,1);
	print(list);
    remove_beg(&list);
	print(list);

    printf("2\n");
	add_end(&list,1);
	print(list);
    remove_beg(&list);
	print(list);

    printf("3\n");  
	add_beg(&list,1);
	print(list);
    remove_beg(&list);
    //remove_end(&list);
	print(list);

    printf("4\n");
	add_end(&list,1);
	print(list);
    remove_beg(&list);
    //remove_end(&list);
	print(list);

    printf("5\n");
	add_beg(&list,1);
    print(list);
    add_beg(&list,2);
	print(list);
    remove_beg(&list);
	print(list);
    remove_beg(&list);
	print(list);

    printf("6\n");
	add_end(&list,1);
	print(list);
	add_end(&list,3);
	print(list);
	add_beg(&list,1);
	print(list);
    remove_beg(&list);
	print(list);
    remove_end(&list);
	print(list);
	add_end(&list,3);
	print(list);    
    remove_end(&list);
	print(list);
	add_end(&list,3);
	print(list);
    remove_beg(&list);
	print(list);

    remove_end(&list);
	print(list);
    remove_end(&list);
	print(list);
    remove_beg(&list);
	print(list);

	return 0;
}

