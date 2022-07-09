#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL,"");
	float larg,compr,vmetr;
	printf("\nDigite a largura do terreno: ");
	scanf("%f",&larg);
	printf("\nDigite o comprimento do terreno: ");
	scanf("%f",&compr);
	printf("\nDigite o valor do metro quadrado do terreno: ");
	scanf("%f",&vmetr);
	
	printf("\nA área do terreno é de: %.2f metros quadrados\n O preço do terreno é de %.2fR$",larg*compr,(larg*compr)*vmetr);
}
