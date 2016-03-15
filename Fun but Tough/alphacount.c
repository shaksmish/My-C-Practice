// http://stackoverflow.com/questions/9449295/opening-a-file-from-command-line-arguments-in-c
// enter text and press CTRL +D
// in this program we use commond line arguements argv.
//this program demonstrates how to uses file operations for input in command line 
#include <stdio.h>
int main(int argc,char *argv[]){//argc hold the number of arguements passed
	//printf("%d\n",argc );// argv is array of pointers to the strings of arguements
	int c,i,j,nwhite,nother;
		/*for(i=0;i<argc;i++)
			printf("%s\n",argv[i] );*/
	FILE *file=fopen(argv[1],"r");// opens the file and stores it in 'file' .
	int nalpha[26];
	nwhite=nother=0;
	for(i=0;i<26;i++)
		nalpha[i]=0;
	if(file==0)
		printf("Sorry file could not be found!!\n");	
	else
	{
		while((c=fgetc(file))!=EOF){// fgetc  Read one character at a time from file
		if(c>='a' && c<='z')
			++nalpha[c-'a'];
		else 
			if(c==' '||c=='\n'||c=='\t')
				++nwhite;
			else
				++nother;
		}
	}
	fclose(file);	
	printf("\n");
	printf(":::::::::::::::::::::Alpha_Count:::::::::::::::::\n");
	for(i=0;i<26;i++){
		printf("%3c |",i+'a' );
		for(j=0;j<nalpha[i];j++){
			printf("#");
		}
		printf("\n");
	}
	printf("white spaces :%d\n",nwhite );
	printf("other :%d\n",nother);		
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
// gives verical graph of the alphabet occurence
/*
Alpha  Count ::
a |###############
b |
c |############
d |####
e |##################
f |#############
g |#
h |##################
i |###############################
j |####
k |
l |#########
m |#
n |################################
o |##########
p |##############
q |
r |#################
s |#####
t |########################
u |##
v |
w |######
x |
y |
z |#

white spaces :94
other :187

*/