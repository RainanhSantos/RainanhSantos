#include <stdio.h>
#include <stdlib.h>

#define tam 8

main () {
	int mat[tam][tam],x,y;

	for(x=0;x<tam;x++){
		for(y=0;y<tam;y++){
			mat[x][y]=rand()%50+1;
		}
	}
	
	printf("\nMatriz gerada: \n\n");
	
	for(x=0;x<tam;x++){
		for(y=0;y<tam;y++){
			printf("| %.2d |",mat[x][y]);
		}
		printf("\n");
	}
	
	printf("\nMatriz triangular inferior: \n\n");
	
		for(x=0;x<tam;x++){
		for(y=0;y<tam;y++){
			if(x>y)
			printf("| %.2d |",mat[x][y]);
			else
			printf("| 00 |");
		}
		printf("\n");
	}
	
}
