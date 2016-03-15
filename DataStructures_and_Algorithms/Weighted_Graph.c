//Prints adjacency matrix of given graph
// not correct properly
#include <stdio.h>
main(){
	int i,ne,nv,j;
	printf("Enter the number of vertices?\n");
	scanf("%d",&nv);
	typedef struct {
		int id;
		int cv[nv];//number of connected vertices is cv
	} vertex;
	vertex v[nv];
	for(i=1;i<nv+1;i++){		
		v[i].id=i;
		for(j=0;j<nv;j++){
			v[i].cv[j]=0;
		}
	}
	int q;
	j=0;
	for(i=0;i<nv;i++){

		printf("Enter the id's of vertices connected to id: %d vertex and enter -1 to exit \n",i+1);
		j=0;
		while(j<nv){
			scanf("%d",&q);
			if(q>0){
				printf("Enter the weight of the EDGE:\n");
				scanf("%d",&v[i].cv[q-1]);
				break;
			}
			if(q==-1)
			 break;	
			j++;
		}
		
	}
	for(i=0;i<nv;i++){
		for(j=0;j<nv;j++){
			if(v[i].cv[j]!=0)
				v[i].cv[j]=1;
		printf("%4d",v[i].cv[j] );
		}	
		printf("\n");
	}

}