//stack using linked list(L.I.F.O)
//here we will use stack.c and linkedlist program 
//segmentation fault when we pop the head(correction needed)
//we can make it better and reduce code if we keep track of tail and top
//while creating the stack.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 10
typedef struct node{
	int n;
	struct node *next; //this makes link between nodes
} node; 
void display(void);
int pop(node *);
node *find(node *);
void print(node *);
void create(node *);
int count(node *);
main(){
	node *head,*top;
	head=(node *) malloc(sizeof(node));
	top=head;//head is head of linked list but bottom of stack
	int q,ch,p;
int count(node *h){//finds size by traversing all the way to last node
	int size;
	size=1;
	while(h->next!=NULL){
		size++;
		h=h->next;
	}
	return size;
}	
node *find(node *head){// helps in finding  the top of stack 
	node *crawler;//finds the node below the top in stack
	crawler=head;
	while(crawler->next!=NULL){//finds the node address just before the last node 
	if(crawler->next->next==NULL)//so i can delete the last node by it's address
		return crawler;
	crawler=crawler->next;
	}
	return crawler;
}

int  pop(node *head){// returns the node item of top node (last node of linked list) 
	top=find(head);// then deletes it
	int t;//set top of stack to  last node of linked list
	t=top->next->n;//t is item to be returned which was stored in top of stack 
	if(top->next!=NULL){
		free(top->next);
		top->next=NULL;//specify end of the linked list
		return t;
	}
	else
		return -101;	//means empty stack 
}
void create(node *list){
	printf("Enter a number to be added else -999 to exit .\n");
	scanf("%d",&list->n);
	if(list->n==-999)
		list->next=NULL;
	else{
		list->next=(node *)malloc(sizeof(node));
		top=list->next;
		create(list->next);//recursive call
	}

	
}
void print(node *list){
	if(list->next!=NULL){
		printf("%2d -->",list->n);
	}
	if(list->next==NULL){
		printf("%5d ",list->n);
		return ;	
	}
	
	print(list->next);

}
/*void display(void){
	printf("\n");
		printf("##################\n");
	
	for ( i = top-1;i>=0; i--)
	{
		printf("|%8d        |\n",stack[i] );
		printf("|****************|     \n");
	}
	printf("##################\n");
}*/

	for(;;){
		printf("\n");
		printf("=========================================\n");
	printf("1. Enter 1 to push number in stack .    |\n");
	printf("2. Enter 2 to pop from stack.           | \n");
	printf("3. Enter 3 to display the   stack.      |\n");
	printf("4. Enter 4 to count the size of stack   |\n");
	printf("5. Enter 5 to Exit.                     |\n");	
		printf("=========================================\n");
	scanf("%d",&ch);
	switch(ch){
		case 1: 
			create(head);
			print(head);
			break;
		case 2:		
			printf("\n");			
			p=pop(head);
			if(p==-101){
				printf("Sorry the stack is Empty!!\n" );
				break;
			}
			print(head);
			printf("\n");
			printf("The popped number from stack is %d",p);
			printf("\n");
			
			break;
		case 3:
			print(head);
			break;
		case 4:	
			printf("The size of stack is %d\n",count(head));
			break;
		case 5:
			exit(0);

	}


}
}