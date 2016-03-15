typedef struct man {
	char name[20];
	int age;
	int sex[2];	
} person;
#include <stdio.h>
main(){
	// person me={"kshitij",20,"m"};/*
	// printf("Enter the name ,age & sex?\n");
	// scanf("%s ",me.name);
	// scanf("%d",&me.age);
	// scanf("%s",me.sex);*/
	// printf("%s %d %s\n", me.name,me.age,me.sex);	
	person me;	
	int i;	
	for(i=0;i<3;i++){
	 	me.sex[i]=i+6;
	}
	for(i=0;i<3;i++){
		printf("%d\n",me.sex[i] );
	}
}