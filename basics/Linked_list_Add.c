#include <stdio.h>
#include <stdlib.h>
typedef struct node{
		int n;
		struct node *next;
	} node;
node * add(int );
main(){
	
	node *head,*present;
	head=(node *) malloc(sizeof(node));
	head->n=12;
	head->next=0;
	int i;
	i=0;
	for(present=head;present<head+5;present++){
		present->next=add(i);
		i++;
	}
	for(present=head;present<head+5;present++){
		printf("%d is stored at %u\n",present->n,present );
	}

}
node *add(int p){
	node *newnode;
	newnode=(node *) malloc(sizeof(node));
	newnode->next=0;
	newnode->n=p;
	return newnode;
}
