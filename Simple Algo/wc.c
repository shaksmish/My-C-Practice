//input the content to be analysed and the press ctrl+D
#include <stdio.h>
#define OUT 0
#define IN 1
main(){
	int c,nl,nc,nw,state; 
	nl=nc=nw=0;
	while((c=getchar())!=EOF){
		++nc;
		if(c=='\n')
			++nl;
		if(c =='\t' ||c == '\n'|| c ==' ')
			state=OUT;
		else if(state==OUT){
			state=IN;
			++nw;
		}		
		
	}
	printf("Number of characters : %d\n",nc );	
	printf("Number of lines : %d\n",nl );		
	printf("Number of words : %d\n",nw );

}      






