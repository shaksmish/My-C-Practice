// bubble Sorting program
#include <stdio.h>
int *getrandom(); // function to genrate random numbers.
int *sort(int a[]);// sorting function
main(){
	int *p; //p stores random  number array(unsorted)
	int i,q;
	p=getrandom();
	int *k;
	printf("-------------------------------------------------------------\n");
	printf("Array before Sorting :\n");
	for(i=0;i<10;i++)
		printf("| %4d |",*(p+i) );
	printf("\n");
	printf("-------------------------------------------------------------\n");
	k=sort(p); // k stores the sorted array
	printf("Array after Sorting :\n");
	for(i=0;i<10;i++)
		printf("| %4d |",*(k+i) );
	printf("\n");
	printf("-------------------------------------------------------------\n");
} 
int *sort(int a[]){
	int i,j,temp;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(a[j]>a[j+1]){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	return a;
}
int *getrandom(){// random number generator
	static int r[10]; // because we can't return local variable outside without static 
	int i;
	for(i=0;i<10;i++)
	r[i]=rand() % 10;
	return r; 
}   
/*kshitij@kshitij-X200CA:~/c_practice$ ^C
kshitij@kshitij-X200CA:~/c_practice$ gcc bubblesort.c
kshitij@kshitij-X200CA:~/c_practice$ ./a.out
-------------------------------------------------------------
Array before Sorting :
|    3 ||    6 ||    7 ||    5 ||    3 ||    5 ||    6 ||    2 ||    9 ||    1 |
-------------------------------------------------------------
Array after Sorting :
|    0 ||    1 ||    2 ||    3 ||    3 ||    5 ||    5 ||    6 ||    6 ||    7 |
-------------------------------------------------------------
*/






