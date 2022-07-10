#include <stdio.h>
#include <locale.h>

main () {
	setlocale(LC_ALL,"");
	int num,numpares,numimpar,confirmar;
	float media;
	numpares=0;
	numimpar=0;
	media=num;
	do{
	
	    printf("\nDigite um número: ");
	    scanf("%d",&num);
	    media=num+media;
        if (num%2==0) 
		numpares++;
        
        else
        numimpar++;
        
        printf("\nDeseja adicionar mais um número? (1-sim | 0-não)");
          scanf("%d",&confirmar);
        
}   while (confirmar);
        
       
        
printf("\nVocê digitou %d números impares, %d números pares e a média é de %.2f", numimpar,numpares,media/(numimpar+numpares));
}
