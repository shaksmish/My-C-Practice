// Linear Search Program
#include <stdio.h>
int *getrandom(); // function to genrate random numbers.
int find(int a[],int);// finding function
main(){
	int *p; //p stores random  number array(unsorted)
	int i,q,index;
	p=getrandom();
	printf("Enter the number to be searched ??\n");
	scanf("%d",&q);
	index=find(p,q);
	printf("Array is :\n");
	printf("-------------------------------------------------\n");
	for(i=0;i<10;i++)
		printf(" %2d |",*(p+i) );
	printf("\n");
	printf("--------------------------------------------------\n");
	if(index!=-1){
		printf("The number  '%d' found and index is %d\n",q,index );
	}
	else
		printf("Number Not found\n");
} 
int find(int a[],int q){
	int i,j,temp;
	for(i=0;i<10;i++){
		if(a[i]==q){
			return i;
		}
	}
	return -1;
}
int *getrandom(){
	static int r[10]; // because we can't return local variable outside without static 
	int i;
	for(i=0;i<10;i++)
	r[i]=rand() % 10;
	return r; 
}   
/*kshitij@kshitij-X200CA:~/c_practice$ ./a.out  
Enter the number to be searched ??
9
Array is :
-------------------------------------------------
  3 |  6 |  7 |  5 |  3 |  5 |  6 |  2 |  9 |  1 |
--------------------------------------------------
The number  '9' found and index is 8
*/






