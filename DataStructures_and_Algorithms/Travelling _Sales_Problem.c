// travelling salesperson problem solved without algorithm
//program to input the adjacency  matrix of weighted undirected graph
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
main(){
	int r,c,nv,k;
	printf("Enter the number of vertices?\n");
	scanf("%d",&nv);//nv: number of vertices
	int adjmat[nv][nv];//adjmat:adjancency matrix
	printf("Enter the weight of all the edges?.\n");
	k=0;
	for(r=0;r<nv;r++){// outer loop controls the row movement .
		for(c=k;c<nv;c++){ //inner loop controls the column movement.
			if(r==c){
				adjmat[r][c]=0; //we don't ask for the user input if vertex is connected to itself 
			}
			else{				
				printf("Enter  the weight of edge from %c to %c?\n",r+'A',c+'A' );// We use A to make some sense
				scanf("%d",&adjmat[r][c]);//since it is undirected we only need to know
				adjmat[c][r]=adjmat[r][c];//  the upper half of the matrix
			}
		}
		k++;// k is used as column increment,it advances the column and prevents 
	}//user input to enter A -> B and then B-> A diffently.
	
	for(c=0;c<nv;c++){//prints the horizontal row for ABCD..
		if(c==0)
			printf("%7c",'A'+c );
		else                      // if-else used in keeping alignment 
			printf("%6c",'A'+c );
	}
	printf("\n");
	for(r=0;r<nv;r++){
		printf("%c",'A'+r );// prints the verical row for ABC..
		for(c=0;c<nv;c++){			
			printf("%6d",adjmat[r][c]);
		}
		printf("\n");
	}
}