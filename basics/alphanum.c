#include <stdio.h>
#include <ctype.h>
main(){
	char c; 
	c=' ';
	while(c!=EOF){
	printf("Enter anything!!\n");
	c=getchar();
	if(isalpha(c))
		printf("It's a letter \n");
	else 
		if(isdigit(c)) 
		printf("It's a digit \n");
		else
		printf("It's not alphanumeric \n");
	
}

}      






