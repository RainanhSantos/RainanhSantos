#include<stdio.h>
#include<string.h>
main()
{
	char s1[50],s2[50];
	
	printf("Digite uma string: ");
	gets(s1);
	printf("\nDigite outra string: ");
	gets(s2);
	
	strcat(s2,s1);
	
	printf("%s",s2);
	
	
		
	
}
