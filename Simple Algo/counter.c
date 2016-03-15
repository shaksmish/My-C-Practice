#include <stdio.h>
main(){
	int c,nl,t,b,nc;
	nl=t=b=nc=0;
	while((c=getchar())!=EOF){
		++nc;
		if(c=='\n')
			++nl;
		else if(c=='\t')
			++t;
		else if(c==' ')
			++b;
	}
	printf("Number of characters : %d\n",nc );	
	printf("Number of lines : %d\n",nl );		
	printf("Number of tabs : %d\n",t );
	printf("Number of blanks : %d\n",b );

}