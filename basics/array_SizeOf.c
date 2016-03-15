//finding the array size using sizeof
#include <stdio.h>
main(){
	int k,a[5],l;
	for(k=0;k<20;k++)
		a[k]=k;
	l=sizeof(a)/sizeof(a[0]);//determine length of an array!!!
	printf("%d\n", l);
	return 0;
}      


