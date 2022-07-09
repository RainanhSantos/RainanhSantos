#include <stdio.h>
#include <stdlib.h>

#define tam 6

main () {
	
	int mat[tam][tam],x,y,localiza,flag=0;
	int troca[6];
	//preenchendo com valores aleatórios
	for(x=0;x<tam;x++) {
		for(y=0;y<tam;y++){
			mat[x][y]=rand()%50;
			printf(" %.2d ",mat[x][y]);
		}
		printf("\n");
	}
	//localizando um valor x
	printf("Informe o valor a ser localizado: ");
	scanf("%d",&localiza);
		for(x=0;x<tam;x++) {
		for(y=0;y<tam;y++){
			
			if(localiza==mat[x][y]){
				printf("\nValor encontrado na linha %d coluna %d \n",x+1,y+1);
				flag++;
			}
		}
	}
	
	if(flag==0){
		printf("Valor nao encontrado!\n ");
	}
	//troca dos valores das colunas
	for(x=0;x<tam;x++){
		troca[x]=mat[x][1];
		mat[x][1]=mat[x][3];
		mat[x][3]=troca[x];
	}
	printf("\ncoluna 2 substituida pela coluna 4: \n\n");
		for(x=0;x<tam;x++) {
		for(y=0;y<tam;y++){
			printf(" %.2d ",mat[x][y]);
		}
		printf("\n");
	}
	printf("\n\n");
	//matriz triangular superior
		for(x=0;x<tam;x++) {
		for(y=0;y<tam;y++){
			if(x<y)
			printf(" %.2d ",mat[x][y]);
		}
		printf("\n");
	}
	
}
