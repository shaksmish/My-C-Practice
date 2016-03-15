// enter text and press CTRL+ D
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
		printf("%c|%3d|",i+'a',nalpha[i] );
		for(j=0;j<nalpha[i];j++){
			printf("#");
		}
		printf("\n");
	}	
	printf("\n");
	printf("white spaces :%d\n",nwhite );
	printf("other :%d\n",nother);		
}
// gives verical graph of the alphabet occurence
/*
Alpha  Count ::
a| 18|##################
b|  0|
c| 12|############
d|  6|######
e| 22|######################
f| 13|#############
g|  1|#
h| 19|###################
i| 32|################################
j|  4|####
k|  0|
l| 10|##########
m|  1|#
n| 35|###################################
o| 10|##########
p| 16|################
q|  0|
r| 19|###################
s|  7|#######
t| 27|###########################
u|  2|##
v|  0|
w|  6|######
x|  1|#
y|  0|
z|  1|#

white spaces :98
other :201
*/