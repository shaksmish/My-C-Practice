//binary  search tree
//here  node is a binary search tree node
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

	typedef struct node {
		int data;/* data */
		struct node *left;
		struct node *right;
	} node;
	node *insert(node *a,int);
	node *root;
	void printInOrder(node *m);
	void printPreOrder(node *m);
	void printPostOrder(node *m);
main(){
	int ch;
	node *insert(node *root,int d){
	if(root==NULL){
		root=(node *)malloc(sizeof(node));
		if(root==NULL){
			printf("Memory error\n");
			return;
		}
		else{
			root->data=d;
			root->left=root->right=NULL;
		}		
	}
	else{
		if(d<root->data)
			root->left=insert(root->left,d);
		else if(d>root->data)
			root->right=insert(root->right,d);
	}
	return root;	
}
void printInOrder(node *root){//LDR
	if(root){
		printInOrder(root->left);
		printf("%3d",root->data );
		printInOrder(root->right);
		// printf("\n");
	}
}
void printPreOrder(node *root){//DLR
	if(root){
		printf("%3d",root->data );
		printPreOrder(root->left);
		printPreOrder(root->right);
	}
}
void printPostOrder(node *root){//LRD
	if(root){
		printPostOrder(root->left);
		printPostOrder(root->right);
		printf("%3d",root->data );
		// printf("\n");
	}
}
	int i;
	int a[9]={1,2,3,4,5,6,7};
	for(i=0;i<7;i++)
		root=insert(root,a[i]);
	printf("::::::::::::::PostOrder:::::::::::");
			printf("\n");
			printPostOrder(root);
			printf("\n");			
			printf("::::::::::::::PreOrder:::::::::::");
			printf("\n");
			printPreOrder(root);
			printf("\n");
			printf("::::::::::::::InOrder:::::::::::");
			printf("\n");
			printInOrder(root);
			printf("\n");
	/*printf("Enter 1 for PreOrder,2 for InOrder and 3 for  PostOrder\n");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("\n");
			printPreOrder(root);
			break;
		case 2:
			printf("\n");
			printInOrder(root);
			break;
		case 3:
			printf("\n");
			printPostOrder(root);
			break;
		default:
			
		}*/
	}
node *create(int in){
	node *nnode;
	nnode=(node *)malloc(sizeof(node));
	nnode->data=in;
	return nnode;
}

