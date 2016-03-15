//
#include<stdio.=h>
main(){
	int i;
	printf("%4c\n",'*');
	for(i=0;i<4;i++){
		printf("%2c",'*');
	}
	printf("\n");
	printf("\n%3c",'+' );
	for(i=0;i<2;i++){
		printf("%2c",'+');
	}
	printf("\n");
	printf("%4c",'-' );
	for(i=0;i<1;i++){
		printf("%2c",'-');
	}
	printf("\n%5c\n",'*');

}