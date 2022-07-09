#include <stdio.h>
#include <string.h>

main() {
	
	char palavra1[20],palavra2[20],embaralha[40];
	int tam1,tam2,cont,x=0,y=0;
	
	printf("Digite uma palavra:  ");
	gets(palavra1);
	printf("digite outra palavra:  ");
	gets(palavra2);
	tam1=strlen(palavra1);
	tam2=strlen(palavra2);
	
	if(tam1>tam2) {
		
		
		for(cont=0;cont<tam1+2;cont++) {
		
			if(cont%2==0) {
			embaralha[cont]=palavra1[x];
			x++;
	}       if(cont%2==1){
			embaralha[cont]=palavra2[y];
		    y++;
	}
		
}

            for(cont=cont;cont<tam1+tam2;cont++) {
	        embaralha[cont]=palavra1[x];
	        x++;
}

	printf("\n\n%d volory",y);
	printf("\n\n%d volorx",x);
    printf("\n\n%d volorcont",cont);
	printf("\n\n%d tam1",tam1);
	printf("\n\n%d",tam2);

	
		
}
	if(tam1<tam2) {
		
		
		for(cont=0;cont<tam1+4;cont++) {
		
			if(cont%2==0) {
			embaralha[cont]=palavra1[x];
			x++;
	}       if(cont%2==1){
			embaralha[cont]=palavra2[y];
		    y++;
	}
	
}

for(cont=cont;cont<tam1+tam2;cont++) {
	embaralha[cont]=palavra2[x];
	x++;
}	
		
}
 

	printf("\n\n%d volory",y);
	printf("\n\n%d volorx",x);
    printf("\n\n%d volorcont",cont);
	printf("\n\n%d tam1",tam1);
	printf("\n\n%d",tam2);
	printf("\n\n%s",embaralha);
}
