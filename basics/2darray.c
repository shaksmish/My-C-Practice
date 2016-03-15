// prints a demo matrix then inputs one row at a time  and prints the matrix 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
main(){
	
	int row,col,r,c;
	int a[3][5]={
		{2,3,7,4,0},
		{3,6,90,8,6,},         //demo Matrix
		{23,11,87,55,34}
	};
	for(r=0;r<3;r++){
		for(c=0;c<5;c++){
			if(c<4)
				printf(" %3d   |",a[r][c]);
			else
				printf(" %3d   ",a[r][c]);
		}
		printf("\n");
		if(r<2)
			printf("-------------------------------------\n");
		
	}//end of demo part 

	printf("Enter the number of rows?\n");
	scanf("%d",&row);
	printf("Enter the number of columms?\n");
	scanf("%d",&col);
	int k[row][col];
	
	for(r=0;r<row;r++){ //outer loop controls the row loop 
		printf("Enter the elements of the %d row :\n",r+1);
		for(c=0;c<col;c++){// this loop controls the columnwise input .
			scanf("%d",&k[r][c]);
		}
		printf("\n");
	}//end of input loop
	//start of the print loop
	for(r=0;r<row;r++){
		for(c=0;c<col;c++){
			if(c<col-1)
				printf(" %3d   |",k[r][c]);
			else
				printf(" %3d   ",k[r][c]);

		}
		printf("\n");
		if(r<row-1)
			printf("----------------------------\n");
		
	}
	

	
}