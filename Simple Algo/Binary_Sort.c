//Binary Sorting Program
#include <stdio.h>
int *getrandom(); // function to genrate random numbers.
int *sort(int a[]); // we need a sorted array to perform binary search
int bin(int a[],int n);
main(){
	int *p;
	int i,q;
	p=getrandom(); //p stores random  number array(unsorted)
	int *k;
	printf("-------------------------------------------------------------\n");
	printf("Array before Sorting :\n");
	for(i=0;i<10;i++)
		printf("%3d ||",*(p+i) );
	printf("\n");
	printf("-------------------------------------------------------------\n");
	k=sort(p); // k stores the sorted array
	printf("Array after Sorting :\n");
	for(i=0;i<10;i++)
		printf("%3d ||",*(k+i) );
	printf("\n");
	printf("-------------------------------------------------------------\n");
	printf("Enter a number to be searched?\n");
	scanf("%d",&q);
	if(bin(k,q)==-1){
		printf("Number not Found\n");
	} 
	else{
		printf("The postion of number is :%d\n",bin(k,q) );	
	}
}
int bin(int a[],int n){
	int high,low,mid,i;
	low=0;
	high=19;
	while(low<=high){
		mid=(high+low)/2;
		//printf("%d %d %d\n",low ,mid,high );
		if(n<a[mid])
			high=mid-1;
		else if(n>a[mid])
			low=mid+1;
		else if(a[mid]==n) 
			return mid+1;
	}
	return -1;
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
int *getrandom(){
	static int r[20]; // why use  static
	int i;
	for(i=0;i<20;i++)
		r[i]=rand() % 20;
	return r; 
}   
/*
kshitij@kshitij-X200CA:~/c_practice$ gcc sortbin.c
kshitij@kshitij-X200CA:~/c_practice$ ./a.out
-------------------------------------------------------------
Array before Sorting :
  3 ||  6 || 17 || 15 || 13 || 15 ||  6 || 12 ||  9 ||  1 ||
-------------------------------------------------------------
Array after Sorting :
  1 ||  2 ||  3 ||  6 ||  6 ||  9 || 12 || 13 || 15 || 15 ||
-------------------------------------------------------------
Enter a number to be searched?
6
The postion of number is :5

*/






