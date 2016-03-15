#include <stdio.h>
int htoi(char s[]);
main(){
	char str[10];
	printf("Enter a hexadecimal number \n" );
	scanf("%s",str);
	printf("The value of %s in decimals is : %3d\n",str,htoi(str));
}      
int htoi(char  s[]){
	int i,n;
	n=0;
	for(i=0;s[i]!='\0';i++){
		if(s[i]>='0' && s[i]<='9')
			n=n*16+(s[i]-'0');
		else 
			if(s[i]>='A' && s[i]<='F')
				n=n*16+(s[i]-'A'+10);
			else
				if(s[i]>='a' && s[i]<='f')
			  		n=n*16+(s[i]-'a'+10);
		else
			n=-1;	  			
	}
	return n;
}
/*
kshitij@kshitij-X200CA:~/c_practice$ gcc htoi.c
kshitij@kshitij-X200CA:~/c_practice$ ./a.out 
Enter a hexadecimal number 
2342
The value of 2342 in decimals is : 9026
kshitij@kshitij-X200CA:~/c_practice$ ./a.out 
Enter a hexadecimal number 
3fa4
The value of 3fa4 in decimals is : 16292


*/