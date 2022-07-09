#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main () {
	setlocale(LC_ALL,"");
	int idade[2],i;
	char nome[2][100],n;
	float media;
	
	fflush(stdin);
	printf("\nDigite os dois nomes: ");
	
	for(n=0;n<2;n++){
		
		scanf("%s",&nome[n]);
		
	}
	
	printf("\nDigite a idade deles: ");
	
	for(i=0;i<2;i++) {
		scanf("%d",&idade[i]);
		
		
	}
	
	for(i=0;i<2;i++) {
		media=media+idade[i];
		
		
	}
	
	
	i=0;
	n=0;
	
	while(i<=1) {
		printf("\nNome: %s  %d anos de idade",nome[i],idade[n]);
		
		i++;
		n++;
	}
	
	printf("\nA média de idade é de %.2f anos",media/2);
	
	
}
