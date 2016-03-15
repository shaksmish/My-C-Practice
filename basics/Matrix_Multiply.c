//print the multiplication of two matrices
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
main(){	
	int r,c,n;
	printf("Enter the number of ns?\n");
	scanf("%d",&n);
	int a[n][n];	
	int b[n][n];
	int ca[n][n];
	
	for(r=0;r<n;r++){ //outer loop controls the n loop 
		for(c=0;c<n;c++){// this loop controls the columnwise input .
			b[r][c]=rand() % 10;
			a[r][c]=rand() % 10;// this fills the matrix
		}
	}
	
	for(r=0;r<n;r++){
		for(c=0;c<n;c++){
			if(c<n-1)
				printf(" %3d   |",a[r][c]);
			else
				printf(" %3d   ",a[r][c]);
		}
		printf("\n");
		if(r<n-1)
			printf("----------------------------\n");
	}
	printf("======================================================================\n");

	for(r=0;r<n;r++){
		for(c=0;c<n;c++){
			if(c<n-1)
				printf(" %3d   |",b[r][c]);
			else
				printf(" %3d   ",b[r][c]);
		}
		printf("\n");
		if(r<n-1)
			printf("----------------------------\n");
	}
	int temp,k;
	printf("======================================================================\n");

	for(r=0;r<n;r++){ //outer loop controls the n loop 
		for(c=0;c<n;c++){// this loop controls the columnwise input .
			temp=0;
			for(k=0;k<n;k++){
				temp=temp+a[r][k]*b[k][c];
			}	
			ca[r][c]=temp;
		}
	}
	for(r=0;r<n;r++){
		for(c=0;c<n;c++){
			if(c<n-1)
				printf(" %3d   |",ca[r][c]);
			else
				printf(" %3d   ",ca[r][c]);
		}
		printf("\n");
		if(r<n-1)
			printf("----------------------------\n");
	}
		

}