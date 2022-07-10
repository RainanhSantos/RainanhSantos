#include <stdio.h> 
#include <locale.h>

main () {
	setlocale(LC_ALL,"");
	int inteiro,soma,continuar;
	do{
		printf("\nDigite um número inteiro: ");
		scanf("%d",&inteiro);
		soma=inteiro+soma;
		printf("\n deseja digitar mais um número? (1-SIM | 0-NÃO");
		scanf("%d",&continuar);
		
		printf("\n Somando os números negativos temos %d ",soma*-1);
		
	}while (continuar);
}
