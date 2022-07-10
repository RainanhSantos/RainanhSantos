#include <stdio.h> 
#include <locale.h>

main () {
	int cont,valor;
	cont=1;
	printf("\nDigite um valor: ");
	scanf("%d",&valor);
	do {
		if (cont<=valor)
		printf("\n%d x %d = %d ",cont,valor,cont*valor);
		cont++;
	}while (cont<=valor);
}
