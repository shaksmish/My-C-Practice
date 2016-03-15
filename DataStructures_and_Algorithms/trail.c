//shows when implementing queue using arrays what should we use to enqueue and maintain 
//continuity ie index where new element is to be stored=(head+length)%max length of array
#include <stdio.h>
main(){
	int head,length,cap;
	cap=4;
	printf("HEAD  LENGTH INDEX\n");
	for(head=0;head<cap;head++){
		for (length = 0; length < cap; length++)
		{
			printf("%3d%6d%10d\n",head,length,(head+length)%cap );
		}
	}	
}