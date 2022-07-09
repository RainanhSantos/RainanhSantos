#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

struct dados1{
	char marca[10];
	char modelo[10];
	int anofabricacao;
	int anomodelo;
	float valor;
}carros[100];

int pos=0,nav;

void menu() {
	printf("\n\n*** SELECIONE UMA OPÇÃO ***");
	printf("\ni - Inserir carro");
	printf("\np - Imprimir lista de carros");
	printf("\nr - Pesquisa por modelos de carros");
	printf("\nt - Pesquisa por marca");
	printf("\nv - Pesquisa por valor do carro");
	printf("\ns - sair");
	printf("\nDigite a opção desejada: ");
}

void adicionarcarros(int posicao){
	printf("\n\nMarca do carro: ");
	gets(carros[posicao].marca);
	printf("Modelo do carro: ");
	gets(carros[posicao].modelo);
	printf("Ano de fabricação: ");
	scanf("%d",&carros[posicao].anofabricacao);
	printf("Ano do modelo: ");
	scanf("%d",&carros[posicao].anomodelo);
	printf("Valor do carro: ");
	scanf("%f",&carros[posicao].valor);
	fflush(stdin);
	pos++;
}

void imprimirlista(int posicao) {
	printf("\n\nMarca do carro: %s",carros[posicao].marca);
	printf("\nModelo do carro: %s",carros[posicao].modelo);
	printf("\nAno de fabricação: %d",carros[posicao].anofabricacao);
	printf("\nAno do modelo: %d",carros[posicao].anomodelo);
	printf("\nValor do carro: %.2f",carros[posicao].valor);
}

 pesquisamodelo(char modelocarro[]) {
	int i, achou=0;
	for(i=0;i<pos;i++) {
		if(strcmp(modelocarro,carros[i].modelo)==0){
			
			imprimirlista[i];
			achou=1;
			
			
		}
		
	}
	if(!achou)
	return -1;
}

 pesquisamarca(char marca[]) {
	int i, achou=0;
	for(i=0;i<pos;i++) {
		if(strcmp(marca,carros[i].marca)==0){
			
		imprimirlista(i);
			achou=1;
			
		}
		
	}
	if(!achou)
	return -1;
}

 int pesquisavalor(float valorminimo, float valormaximo) {
 	
	int i, achou=0;
	for(i=0;i<pos;i++) {
		if(valorminimo <= carros[i].valor && valormaximo>= carros[i].valor){
			
			imprimirlista(i);// Estava imprimirlista[i]; Estava com chave [] e não com parênteses ()
			achou=1;
		}
		
	}
	if(!achou);
	   
	
}

main () {
	
	setlocale(LC_ALL,"");
	
	char opcao,modelocarro[10],marca[10];
	int achou;
	float valormaximo,valorminimo;
	
	do{
		
		menu();
	opcao=getche();
	
	switch (opcao) {
		case 'i':
			if(pos < 100)
			adicionarcarros(pos);
			break;
		case 'p':
			if(pos==0)
			printf("\nVetor vazio!");
			else
			for(nav=0;nav<pos;nav++)
			    imprimirlista(nav);
			 break;
		case 'r':
			printf("\nPesquise o modelo do carro que deseja pesquisar: ");
			fflush(stdin);
			gets(modelocarro);
		    achou=pesquisamodelo(modelocarro);
		    if(!achou)
				printf("Veículo não encontrado!");	  
			   break;
		case 't':
			   	printf("\nPesquise a marca do veículo: ");
			   	fflush(stdin);
			   	gets(marca);
			   	achou=pesquisamarca(marca);
			   	if(!achou)
				   printf("Veículo não encontrado");
				   break;
		case 'v':
				printf("\nDigite o valor mínimo do carro: ");
				fflush(stdin);
			    scanf("%f",&valorminimo);
			    printf("\nDigite o valor máximo do carro: ");
			    fflush(stdin);
			    scanf("%f",&valormaximo);
			    achou=pesquisavalor(valorminimo,valormaximo);
			    if(!achou)
				   printf("Veículo não encontrado");
				   break;   
		case 's':
			 break;
			 
			 default:
			 printf("\nOpção invalida");   
}

	}while(opcao!='s');
	
}
