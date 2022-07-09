#include <stdio.h>
#include <string.h>

main () {
	char p[50],c[50];
	int flag,tam,x,cop,fim;
	
	printf("digite uma palavra\n\n");
	gets(p);
	tam=strlen(p);
	fim=tam-1;
    strcpy(c,p);
	
	for(x=0;x<tam/2;x++) {
		
		cop=p[x];
		p[x]=p[fim];
		p[fim]=cop;
		fim--;
	}
	
    
    flag=strcmp(p,c);
    
    printf("%d",flag);
    
    if(flag==0){
       printf("\nA palavra ""%s"" e um polidromo\n",c);
       printf("\n\npalavra invertida: %s",p);
	}else
	printf("\nA palavra %s nao e um polidromo\n",c);
	
}
