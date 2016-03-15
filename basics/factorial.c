//factorial
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int fact(int);
main(){
	int q;
	printf("Enter a number?\n" );
	scanf("%d",&q);
	printf("factorial of %d is %d\n",q,fact(q));	
}
int fact(int n){
	int p;
	if(n==1)
		return 1;
	else{
		p=n*fact(n-1);
	}
	return p;
}
//factorial using recursion of fact function