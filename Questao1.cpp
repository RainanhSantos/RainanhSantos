#include <stdio.h>
#include <stdlib.h>

#define tam 4

main () {
	int mat[tam][tam],x,y,troca;
	
	for(x=0;x<tam;x++) {
		for(y=0;y<4;y++){
			
			mat[x][y]=rand()%50+1;
			printf(" %.2d ", mat[x][y]);
		}
		printf("\n");
	}
	
	for(y=0;y<tam;y++){
		troca=mat[0][y];
		mat[0][y]=mat[y][0];
		mat[y][0]=troca;
	}
	
	printf("\n\n");
	
		for(x=0;x<tam;x++) {
		for(y=0;y<4;y++){
			
			printf(" %.2d ", mat[x][y]);
		}
		printf("\n");
	}
	
	
}
