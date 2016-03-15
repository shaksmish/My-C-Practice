#include <stdio.h>
#include <ctype.h>
int atoi(char s[]);
main(){
	 char q[10];
	printf("enter a string of numbers\n");
	scanf("%s",q);
	printf("%d\n",atoi(q));
}
int atoi(char s[]){
	int i,n,sign;
	for(i=0;isspace(s[i]);i++)
		;
	sign = (s[i]=='-')?-1:1;
	if(s[i]=='+'||s[i]=='-w')
		i++;
	for(n=0;isdigit(s[i]);i++)
		n=n*10+(s[i]-'0');
	return sign*n;
}