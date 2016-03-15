//queue using arrays  with struct
#include <stdio.h>
#include <stdlib.h>// we use malloc
#define MAX 10
typedef int bool; //helps implements the boolean in C
#define true 1 	   // boolean doesn't exist in C in itself
#define false 0
typedef struct{
	int head; //keeps track of index i.e. front most element 
	int length;//length keeps track of queue size
	int elements[MAX];
} q;
void enqueue(q *);
bool dequeue(q *);
int count(q *);
bool isempty(q *);
void display(q *);
void main(){
	int ch,p,a;
	q *queue;
	queue=(q *)malloc(sizeof(q));
	system("clear");// clears the screen
	queue->length=0;
	for(;;){//starts a never ending loop till u exit internally or
			//externally forcibly using ctrl+C or exit(0);
		printf("\n");
		printf("=========================================\n");
	printf("1. Enter 1 to enqueue number in queue . |\n");
	printf("2. Enter 2 to dequeue from queue.       | \n");
	printf("3. Enter 3 to display the   queue.      |\n");
	printf("4. Enter 4 to count the size of queue   |\n");
	printf("5. Enter 5 to Exit.                     |\n");	
		printf("=========================================\n");
	scanf("%d",&ch);
	switch(ch){
		
		case 1:	
			system("clear");
			if(queue->length==MAX){
				printf("Sorry queue is full ,Please dequeue and then try!!\n");
				break;	
			}
			enqueue(queue);
			system("clear");
			break;
		case 2:
			system("clear");
			printf("\n");			
			p=dequeue(queue);
			if(p=='e'){
				printf("Sorry the queue is Empty!!\n" );
				break;
			}
			printf("The dequeued number from queue is %d",p);
			printf("\n");
			break;
		case 3:
			display(queue);
			break;
		case 4:	
			system("clear");
			display(queue);
			printf("The size of queue is %d\n",count(queue));
			break;
		case 5:
			exit(0);
		default:
				system("clear");
			printf("Please enter the correct choice\n");	
		}
	}
	
}
void display(q *queue){
	system("clear");
	int i;
	printf("\n----------------------------------------------------------------------\n");
	printf("||");
	for(i=0;i<MAX;i++){
		if(i==queue->head){
			printf("#(%d)#||",queue->elements[i] );// display the head element uniquely
		}
		printf("%3d ||",queue->elements[i] );
	}
	printf("\n----------------------------------------------------------------------\n");
	printf("\nThe head element is %d\n",queue->elements[queue->head] );

}
bool isempty(q *queue){
	if(queue->length==0)
		return true;
	return false;
}
int count(q *queue){
	return queue->length;//length keeps track of queue size
}
void  enqueue(q *queue){
	int p;
	printf("Enter a number to be enqueued and -101 to exit\n");
	scanf("%d",&p);
	if(queue->length<MAX && p!=-101){//till there is space or intentionally exit
		queue->elements[( queue->head+queue->length)%MAX]=p;
		queue->length++;//(head+length)%max=index to store
		system("clear");
		display(queue);
		enqueue(queue);//recursive calling till u enter -101
	}
	return ;
}
int dequeue(q *queue){
	system("clear");
	int p;//element that got dequeued
	if(queue->length>0){//checking if the queue is empty or not
		p=queue->elements[queue->head];
		queue->elements[queue->head]='\0';//store null in that dequeued index
 		queue->length--; //reduce length
		queue->head=(++(queue->head)<MAX)?queue->head:0;//jump to zero if head
		display(queue);                                 // reaches the end else 
		return p;										// increase head !
	}
	return 'e'; // e for empty array
}