#include <stdio.h>
main(){
	int c,
	
	while((c=getchar())!=EOF){
		++nc;
		if(c=='\n')
			c="\n";
		else if(c=='\t')
			c="\t";
		else if(c==' ')
			c="\b";
		putchar(c);
	}
	

}