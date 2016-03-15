//simple stack implementation to be used in parenthesis balancing program
// made by kshitij purwar
#include <stdio.h>
#define MAX 100
#include <stdlib.h>
#include <ctype.h>
void pop();
int isEmpty();
int push(char);
int pair(char,char);
// int main(int argc,char *argv[]){
main(){
	typedef struct {
		int top;			// defining the stack 
		char st[MAX];// top is always kept empty and reseved for new element to be inserted
	}	stack;//defines the structure of a stack
	stack  pbs;// a new stck is initiated
	pbs.top=0;//p.b.s::parenthesis balancing stack
	int  push(char p){
		if(pbs.top<MAX){
			pbs.st[pbs.top]=p;//pushes the char to top and the increments pbs.top
			pbs.top++;
			return 1;
		}
		else
			return -1;
	}
	int pair(char a,char b){// a is for inputing opening bracket and 
		switch(a){// b for inputing  closing bracket
			case '{':
				return b=='}';
				break;	
			case '[':
				return b==']';
				break;	
			case '(':
				return b==')';
				break;		
			}
	}

	void pop(void){
		if(pbs.top>0){
			pbs.st[pbs.top-1]='\0';
			pbs.top--;// pbs=parenthesis balancing stack
			}
	}
	int isEmpty(){
		if(pbs.top==0)
			return 1;
		return 0;
	}
	void print(void){
		int i;
		printf("top is  %d and STACK IS :",pbs.top );
		for(i=0;i<pbs.top;i++)
			printf("%c",pbs.st[i] );
		printf("\n");
	}
	char exp[20];
	printf("Enter a String to be checked for balanced parenthesis? \n");
	scanf("%s",exp);
	printf("%s\n",exp );
	int i=0;
	char p;
	while(exp[i]!='\0'){
		printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
		printf("Before push\n");
		print();
		printf("\n");
		if(exp[i]=='{'|| exp[i]=='['|| exp[i]=='('){
			push(exp[i]);
			printf("After push\n");			
			print();
		}
		else
			if(exp[i]==']'|| exp[i]=='}'|| exp[i]==')'){
				if(isEmpty==1 || pair(pbs.st[pbs.top-1],exp[i])==0){
					// printf("1 if Empty :%d ,char in exp. now %c char at top of stack %c\n",isEmpty(),exp[i],pbs.st[pbs.top-1] );
					printf("==========================================\n");
					printf("Sorry !!parenthesis are not balanced !!\n");
					printf("==========================================\n");
					return 0;
					}
				else{
					pop();
					printf("After pop :\n");
					print();
				}
			}	
		i++;
		}
		printf("%d\n",isEmpty() );
		print();
	if(isEmpty()==1){
		printf("==================================\n");
		printf("parenthesis are balanced!\n");
		printf("==================================\n");
	}
}
/*
FILE *file=fopen(argv[1],"r");// opens the file and stores it in 'file' .
	if(file==0)
		printf("Sorry file could not be found!!\n");	
	else
	{*/
