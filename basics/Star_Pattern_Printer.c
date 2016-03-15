#include <stdio.h>
main(){
int i,j,k,lim,l,p;
printf("Enter the number of lines of output you want? but less than 26 \n");
scanf("%d",&lim);
l=lim*2;
p=65;
for(j=0;j<l;j=j+2){
	for(k=0;k<l-j;k++){
			printf(" ");
		}
	for(i=0;i<j+1;i++){		
		printf("%c ",p);
			}
			p++;

		printf("\n");
	}
/*for(i=0;i<5;i++){
		for(j=0;j<21;j++){
				if(j%2==0){
					if(i%2==0)
						printf("+");	
					else
						printf(" ");	
				}
				else{
					printf("*");
				}
			}
			printf("\n");
	}		
*/}
/*	kshitij@kshitij-X200CA:~/c_practice$ ./a.out
Enter the number of lines of output you want? but less than 26 
9
                  * 
                * * * 
              * * * * * 
            * * * * * * * 
          * * * * * * * * * 
        * * * * * * * * * * * 
      * * * * * * * * * * * * * 
    * * * * * * * * * * * * * * * 
  * * * * * * * * * * * * * * * * * 
*/