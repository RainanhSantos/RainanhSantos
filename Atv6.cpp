#include <stdio.h> 
#include <locale.h>

main () {
	setlocale(LC_ALL,"");
	float contch,contze;
	int cont;
	contch=1.50;
	contze=1.10;
	cont=0;
	 do {
	 	  
	 	contze=contze+0.3;
	 	contch=contch+0.2;
	 	cont++;
	 
	 } while (contze<contch);
	 
	 printf("\nSerão necessários %d anos para que zé passe da altura de pedro",cont);
}
