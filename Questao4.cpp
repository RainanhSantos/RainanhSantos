#include<stdio.h>
#include<stdlib.h>
#define tam 6

main()
{


int mat[tam][tam],x,y;

for(x=0;x<tam;x++)
{
	for(y=0;y<tam;y++)
	{
		mat[x][y]=rand()%80-30;	
	}
}



printf("Matriz:\n");
for(x=0;x<tam;x++)
{
	for(y=0;y<tam;y++)
	{
		if(mat[x][y]>=0)
		printf(" %.2d ",mat[x][y]);
		
		else
		printf("%.2d ",mat[x][y]);
	}
	printf("\n");
}

printf("\n\nMatriz sem numeros negativos fora da matriz principal e secundaria:\n");
for(x=0;x<tam;x++)
{
	for(y=0;y<tam;y++)
	{
		if(mat[x][y]>=0)
		printf(" %.2d ",mat[x][y]);
		
		else if(x==y)
		{if(mat[x][y]>=0)
				printf(" %.2d ",mat[x][y]);
		
				else
				printf("%.2d ",mat[x][y]);}
		
		else if(x+y==5)
		{
				if(mat[x][y]>=0)
				printf(" %.2d ",mat[x][y]);
		
				else
				printf("%.2d ",mat[x][y]);}
		
		else
		printf("  0 ");
	}
	printf("\n");
}
}
