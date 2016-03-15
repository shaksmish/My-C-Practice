#include <stdio.h>
#define OUT 0
#define IN 1
main(){
	int i,k,c,nl,nc,nb,j,nw,state,wl; 
	nl=nc=nw=k=nb=0;
	int wls[50];
	for(i=0;i<10;++i)
		wls[i]=0;
	while((c=getchar())!=EOF){
		++nc;
		if(c!=' ')
			++wls[k];
		if(c==' ')
			++nb;
		if(c=='\n')
			++nl;
		if(c =='\t' ||c == '\n'|| c ==' '){
			++k;
			state=OUT;
			}
		else if(state==OUT){
			state=IN;
			
			++nw;
		}		
		
	}
	printf("\n");
	for(i=0;i<nw;i++){

		for(j=0;j<wls[i];j++){
			printf("/>/");
		}
		printf("\n");
	}

		
	printf("\n");
	printf("Number of characters : %d\n",nc );	
	printf("Number of lines : %d\n",nl );		
	printf("Number of words : %d\n",nw+1 );
	printf("Number of blanks : %d\n",nb );
}      