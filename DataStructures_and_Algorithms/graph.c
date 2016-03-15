//Prints adjacency matrix of given graph
#include <stdio.h>
main(){
	int i,ne,nv,j;
	printf("Enter the number of vertices?\n");
	scanf("%d",&nv);
	printf("Enter the number of edges?\n");
	scanf("%d",&ne);
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
			if(q==-1)
			 break;	
			v[i].cv[q-1]=q;
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
	
	int graph[nv][nv];
	for(i=0;i<nv;i++){
		for(j=0;j<nv;j++){
			if(v[i].cv[j]!=-1){
				graph[i][j]=1;
			}
			else
				graph[i][j]=0;

		}
	}
	/*for(i=0;i<nv;i++){
		for(j=0;j<nv;j++){
			printf("%3d",graph[i][j]);
		}
		printf("\n");
	}*/	
}