#include <stdio.h> 
#include <locale.h>

main () {
	setlocale(LC_ALL,"");
	int valor,nume,cont;
	cont=1;
	
	printf("\nDigite quantos valores você irá digitar: ");
	scanf("%d",&valor);
	
	printf("| valor  |  triplo  |");
	
	do {
	
	
	
	printf("digite um número: ");
	scanf("%d",&nume);
	printf("| %d  |  %d  |",nume,nume*3);
	cont++;
	
} while (cont<=valor);


}
