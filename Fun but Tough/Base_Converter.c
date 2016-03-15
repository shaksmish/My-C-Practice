#include <stdio.h>
//use gcc itibg.c -lm to link math library
// exercise 3.5 in k&r2
#include <math.h>
char *itob(int a,char p[],int b);
main(){
	int q,b;
	char s[15];
	printf("Enter a number to be converted ?\n");
	scanf("%d",&q);
	printf("Enter the target base\n");
	scanf("%d",&b);
	printf("The %d is represented by %s in base %d\n",q,itob(q,s,b),b );

}
char *itob(int q,char s[],int b){
	int n,r,d,i,x;
	for(i=0;i<7;i++)//this loop finds a n such that eg
		if (pow(b,i)<=q && pow(b,i+1)>q)// 4*4 <=23<4*4*4
		{ 
			n=i;/* code */ //for example with q=23 and base 4 n=2  
			break;// becoz 16<23<64
		}
		i=0;
	while(q>0){
		x=pow(b,n);//weight ie base to the power n                  64 16 4 1
		r=q%x;//finds the remainder of query % base to the power n   0  1 1 3
		d=(q-r)/x; //how many times to use the weight of base to use
		// printf("%s\n",s );
		if(d<10){ // if it's digit then use character of that digit
			s[i]=(char)('0'+d);//store  that digit in the string s
			i++;
		}
		else if(d>=10) {
			s[i]=(char)(d+'a'-10); //if it's greater than 10 use alphabets i.e. a for 10 and so on..
			i++;
		}
		// printf("%s\n",s );
		q=r; //replace  
		n--;//decrease the weight ie power of base to be used next time
		// printf(" r:%d d:%d x:%d i:%d\n",r,d,x,i );
		if(n<0){
			break; //to prevent processing n=-1;
		}
	}
	int k;
	for(k=i+1;k<15;k++){
		s[k]='\0'; //store null in all the empty places in string to be returned
	}
	return s; //return the string 
}