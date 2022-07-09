#include <stdio.h>
#include <stdlib.h>

#define tam 8

main () {
	int mat[tam][tam],x,y;
	int maior,soma=0;

	for(x=0;x<tam;x++){
		for(y=0;y<tam;y++){
			mat[x][y]=rand()%99+1;
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
		
		}
		printf("\n");
	}
	
	for(x=0;x<tam;x++){
	      	for(y=0;y<tam;y++){
			    if(x>y){
				if(mat[x][y]>maior){
					maior=mat[x][y];
				}
			}
			
		}
		printf("\n");
	}
	
	printf("O maior numero da matriz triangular inferior e %d",maior);
	
		printf("\nMatriz triangular superior: \n\n");
	
		for(x=0;x<tam;x++){
		for(y=0;y<tam;y++){
			if(x<y)
			printf("| %.2d |",mat[x][y]);
		
		}
		printf("\n");
	}
	
			
	for(x=0;x<tam;x++){
	      	for(y=0;y<tam;y++){
			    if(x<y){
				soma=mat[x][y]+soma;
				}
			}
			
		}
		printf("\n");
		printf("A soma da diagonal secundaria e %d",soma);
	}
	

