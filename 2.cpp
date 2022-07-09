#include <stdio.h>
#include <string.h>

main() {
	char palavra[25],letra;
	int quant,x;
	
	printf("Digite uma palavra:\n");
	gets(palavra);
	printf("\ndigite uma letra presente na palavra:  ");
	scanf("%c",&letra);
	
	for(x=0;x<25;x++) {
		
	if(letra==palavra[x]){
		quant++;
	}

}
    if(quant!=0)
	  printf("\nForam encontrados %d letras %c na palavra. ", quant,letra); 
	  else
	  printf("\nNao foi encontrado nenhuma letra %c na palavra. ", letra);
}
