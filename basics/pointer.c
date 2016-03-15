#include <stdio.h>
main(){
    int *a;
	int b[2]={2,3};
	a =++b;
	printf("%d is stored at %x\n",b[1], a);	
}
