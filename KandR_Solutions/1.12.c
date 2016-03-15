#include <stdio.h>
main(){
	int c;
	while((c=getchar())!= EOF){
		if(c =='\t' ||c == '\n'|| c ==' ')
			putchar('\n');		
		if(c!=' ')
		putchar(c);

	}
}	
/*prints every word of input in seperate lines*/	

