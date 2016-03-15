#include <stdio.h>
#include <stdlib.h>
typedef struct node{
		int n;
		struct node *next;
	} node;    // the structure is named node 
void create(node *list );
void print(node *h);
node *find(int n,node *head);
void insert(node *);
void delete(int q,node *);
main(){
	int q,ch,state;
	node *head;
	state=1;
	head=(node *) malloc(sizeof(node));
	while(state){
	printf("Enter 1 to start creating list.\n");
	printf("Enter 2 to insert a number in list. \n");
	printf("Enter 3 to delete  a number from list. \n");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			create(head);
			printf("\n");
			print(head);
			printf("\n");
			break;
		case 2: 
			printf("Enter the number after which you want to insert the number.  \n");
			scanf("%d",&q);
			insert(find(q,head));
			print(head);
			printf("\n");
			break;
		case 3:					
			printf("Enter the number  which you want to remove from the list.  \n");
			scanf("%d",&q);
			delete(q,head);	
			print(head);
			printf("\n");
			break;
			}
		
		printf("Do you want to continue operating ?  \n");
		printf("Enter 1 for Yes and 0 for No!\n");
		scanf("%d",&state);	
	
	}
}
void delete(int q,node *head){
	if(head->n==q){
		head=head->next;
		free(head);
	}
	node *p,*temp;
	p=head;
	while(p->next!=NULL){
		if(p->next->n==q){
			temp=p->next->next;
			free(p->next);
			p->next=temp;
			}
		p=p->next;
		}

}

node *find(int q,node *head){
	node *crawler;
	crawler=head;
	if(head->n==q)
		return head;
	while(crawler->next!=NULL){
	if(crawler->n==q)
		return crawler;

	crawler=crawler->next;
	}
	return NULL;
		

}
void insert(node *p){
	if(p!=NULL){
		node *new;
		new=(node *)malloc(sizeof(node));
		printf("enter the number you want to insert \n" );
		scanf("%d",&new->n);
		new->next=p->next;
		p->next=new;
	}
	else{
		printf("sorry number not found!!\n");
	}
}
void create(node *list){
	printf("Enter a number to be added else -999 to exit .\n");
	scanf("%d",&list->n);
	if(list->n==-999)
		list->next=NULL;
	else{
		list->next=(node *)malloc(sizeof(node));
		create(list->next);
	}

	
}
void print(node *list){
	if(list->next!=NULL){
		printf("%2d -->",list->n);
	}
	if(list->next==NULL){
		 printf("END ");
		return ;	
	}
	print(list->next);
}

