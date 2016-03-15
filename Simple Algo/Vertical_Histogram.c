#include <stdio.h>
main(){
	int c,i,j,nwhite,nother;
	int nalpha[26];
	nwhite=nother=0;
	for(i=0;i<26;i++)
		nalpha[i]=0;
	while((c=getchar())!=EOF){
		if(c>='a' && c<='z')
			++nalpha[c-'a'];
		else 
			if(c==' '||c=='\n'||c=='\t')
			++nwhite;
			else
			++nother;
	}
	printf("\n");
	printf("Alpha  Count ::\n");
	for(i=0;i<26;i++){
		printf("%4c",i+'a' );
	}
	printf("\n");
	for(i=0;i<26*4;i++){
		printf("%c",'-' );
	}
	printf("\n");
	for(i=0;i<=25;i++){
		for(j=0;j<26;j++){
			if(nalpha[j]>0){
				printf("%4c",'#');
				--nalpha[j];
			}
			else
				printf("%4c",' ');
		}
		printf("\n");
		if(i==25)
		for(i=0;i<26*4;i++)
		printf("%c",'-' );
			
	}	

	printf("\n");
	printf("white spaces :%d\n",nwhite );
	printf("other :%d\n",nother);		
}
// Counts and displays a vertical frequency histogram of the alphabets presents