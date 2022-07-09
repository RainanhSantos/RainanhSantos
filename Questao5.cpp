#include <stdio.h>
#include <stdlib.h>

main() {
	
	int mat[50][2],x,y;
	int vet1[50][1];
	int vet2[50][1];

	for(x=0;x<50;x++){//gerando os números da matriz
		for(y=0;y<2;y++){
			mat[x][y]=rand()%99+1;
		}
	}
	
		for(x=0;x<50;x++){//Apresentando a matriz
		for(y=0;y<2;y++){
			printf("| %.2d |",mat[x][y]);
		}
		printf("\n");
	}
	    printf("Area do primeiro triangulo: \n\n");
		for(x=0;x<50;x++){//Apresentando área triângulo 1
		for(y=0;y<1;y++){
			printf("| %.2d |",mat[x][y]);
		}
		printf("\n");
	}
	
		    printf("Area do primeiro triangulo: \n\n");
		for(x=0;x<50;x++){//Apresentando área triângulo 2
		for(y=1;y<2;y++){
			printf("| %.2d |",mat[x][y]);
		}
		printf("\n");
	}
	
	
}
