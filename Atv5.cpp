#include <stdio.h> 
#include <locale.h>

main () {
	int cont=1000;
	do {
		if (cont % 11==5)
		printf("\n%d",cont);
		cont++;
	}while (cont<=1999);
}
