//implementing stack using array
#include <stdio.h>
#include <ctype.h>
#define MAX 10
int push(int);
int pop(void);  
int count(void);
void display(void);
main(){
	int stack[MAX];
	int i,top,state,q,p,ch;
	top=0;
	int  push(int p){
	if(top<MAX){
	stack[top]=p;
	top=top+1;
	return 1;
	}
	else
		return -1;
}
int pop(void){
	if(top>0){
		top--;
		return stack[top];
	}
	else
		return 'e';
}
void display(void){
	printf("\n");
		printf("##################\n");
	
	for ( i = top-1;i>=0; i--)
	{
		printf("|%8d        |\n",stack[i] );
		printf("|****************|     \n");
	}
	printf("##################\n");
}

	for(;;){
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
			printf("----------------------------------------------\n" );
			printf("Enter the number  you want to push in  stack.  \n");
			printf("----------------------------------------------\n");
			scanf("%d",&q);
			p=push(q);
			
			display();
			if(p==-1)
				printf("Sorry the stack is full and nothing could be added!! \n");
			break;
		case 2:					
			p=pop();
			if(p=='e'){
				printf("Sorry the stack is Empty!!\n" );
				break;
			}
			display();
			printf("The poped number from stack is %d",p);
			printf("\n");
			
			break;
		case 3:
			display();
			break;
		case 4:	
			printf("The size of stack is %d\n", top);
			break;
		case 5:
			exit(0);

	}


}
}