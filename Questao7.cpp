#include<stdio.h>
#include<stdlib.h>

main()

{

int acertou=0,contAluno,contQuestao;
char questaoAluno[100][10],gabarito[10];
float nota;


printf("Informe o gabarito:\n");

for(contQuestao=0;contQuestao<10;contQuestao++){
	fflush(stdin);
	scanf("%c",&gabarito[contQuestao]);}

for(contAluno=0;contAluno<100;contAluno++){
	printf("\nInforme as respostas do aluno %d:\n",contAluno+1);	
	for(contQuestao=0;contQuestao<10;contQuestao++){
	fflush(stdin);
	scanf("%c",&questaoAluno[contAluno][contQuestao]);
			if(questaoAluno[contAluno][contQuestao]==gabarito[contQuestao]){
			acertou++;}
			
}
nota=acertou;
acertou=0;
printf("Nota aluno %d: %.2f\n\n",contAluno+1,nota);
}
}
